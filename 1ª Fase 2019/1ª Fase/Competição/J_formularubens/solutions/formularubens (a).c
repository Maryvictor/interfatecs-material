/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema J - Fórmula Rubens                                 ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>

#define LIN 100
#define COL 100

typedef struct coord {
    int lin, col;
} Coord;

int pos_val(int p[][COL], int ml, int mc, Coord c, int o, int d){
    return 0 <= c.lin && c.lin < ml && 0 <= c.col && c.col < mc &&
           p[c.lin][c.col] != -1 && o-d <= p[c.lin][c.col] && 
           p[c.lin][c.col] <= o+d;
}

int alaga(int p[][COL], int ml, int mc, Coord c, int o, int d) {
    if (!pos_val(p, ml, mc, c, o, d)) return 0;
    p[c.lin][c.col] = -1;
    return 1 + alaga(p, ml, mc, (Coord){c.lin-1, c.col}, o, d) 
             + alaga(p, ml, mc, (Coord){c.lin, c.col+1}, o, d)
             + alaga(p, ml, mc, (Coord){c.lin+1, c.col}, o, d)
             + alaga(p, ml, mc, (Coord){c.lin, c.col-1}, o, d);
}

void preenche(int p[][COL], int l, int c) {
    for (int i = 0; i < l; i++)
        for (int j = 0; j < c; j++) scanf("%d", &p[i][j]);
}

int main(void) {
    int p[LIN][COL];
    int l, c, y, x, d;
    scanf("%d %d %d %d", &l, &c, &y, &x);
    scanf("%d", &d);
    preenche(p, l, c);
    printf("%d\n", alaga(p, l, c, (Coord){y-1, x-1}, p[y-1][x-1], d));
    return 0;
}
