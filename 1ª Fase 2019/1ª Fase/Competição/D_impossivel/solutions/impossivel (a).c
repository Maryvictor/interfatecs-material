/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema D - Impossível                                     ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define LIN 100
#define COL 101
#define PAL 101

typedef struct coord {
    int lin, col;
} Coord;

typedef struct no {
    Coord item;
    struct no *prox;
}* Lista;

Coord cima(Coord c) { return (Coord){c.lin-1, c.col}; }
Coord baixo(Coord c) { return (Coord){c.lin+1, c.col}; }
Coord direita(Coord c) { return (Coord){c.lin, c.col+1}; }
Coord esquerda(Coord c) { return (Coord){c.lin, c.col-1}; }

int pos_inv(char f[][COL], int ml, int mc, Coord c) {
    return !(0 <= c.lin && c.lin < ml && 0 <= c.col && c.col < mc);
}

void insere(Coord x, Lista *q) {
    Lista t = *q;
    *q = malloc(sizeof(struct no));
    (*q)->item = x;
    (*q)->prox = t;
}

int busca(char p[], char f[][COL], int ml, int mc, Coord c, Lista *q, Coord (*op[])(Coord)) {
    if (pos_inv(f, ml, mc, c) || f[c.lin][c.col]=='!' || f[c.lin][c.col]!=p[0]) return 0;
    if (p[1] == '\0') {
        insere((Coord){c.lin+1,c.col+1}, q);
        return 1;
    }
    char original = f[c.lin][c.col];
    f[c.lin][c.col] = '!';
    for (int i = 0; i < 4; i++)
        if (busca(p+1, f, ml, mc, op[i](c), q, op)) {
            insere((Coord){c.lin+1,c.col+1}, q);
            return 1;
        }
    f[c.lin][c.col] = original;
    return 0;
}

Lista encontra(char p[], char f[][COL], int ml, int mc, Coord (*op[])(Coord)) {
    Lista q = NULL;
    for (int l = 0; l < ml; l++)
        for (int c = 0; c < mc; c++)
            if (busca(p, f, ml, mc, (Coord){l,c}, &q, op)) return q;
    return NULL;
}

void exibe(Lista q) {
    while (q && q->prox) {
        printf("(%d,%d),", q->item.lin, q->item.col);
        q = q->prox;
    }
    if (q) printf("(%d,%d).\n", q->item.lin, q->item.col);
}

void ordem(Coord (*op[])(Coord), char o[]) {
    for (int i = 0; i < 4; i++)
        switch(o[i]) {
            case ('c'): op[i] = cima; break;
            case ('d'): op[i] = direita; break;
            case ('b'): op[i] = baixo; break;
            default:    op[i] = esquerda; break;
        }
}

void preenche(char f[][COL], int l, int c) {
    for (int i = 0; i < l; i++) gets(f[i]);
}

int main(void) {
    char p[PAL], f[LIN][COL], o[4];
    int l, c;
    Coord (*op[4]) (Coord);

    gets(p);
    scanf("%c%*c%c%*c%c%*c%c%*c", &o[0], &o[1], &o[2], &o[3]);
    ordem(op, o);
    scanf("%d %d%%*c", &l, &c);
    preenche(f, l, c);
    Lista q = encontra(p, f, l, c, op);
    if (q) exibe(q);
    else printf("impossivel!\n");
    return 0;
}
