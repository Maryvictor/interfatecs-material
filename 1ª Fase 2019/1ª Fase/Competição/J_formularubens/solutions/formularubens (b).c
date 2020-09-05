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
║ Versão        :  B (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>

#define LIN 102
#define COL 102

typedef struct coord {
    int lin, col;
} Coord;

int pos_val(int p[][COL], Coord c, int o, int d){
    return p[c.lin][c.col] != -1 && o-d <= p[c.lin][c.col] && 
           p[c.lin][c.col] <= o+d;
}

int alaga(int p[][COL], Coord c, int o, int d) {
    if (!pos_val(p, c, o, d)) return 0;
    p[c.lin][c.col] = -1;
    return 1 + alaga(p, (Coord){c.lin-1, c.col}, o, d) 
             + alaga(p, (Coord){c.lin, c.col+1}, o, d)
             + alaga(p, (Coord){c.lin+1, c.col}, o, d)
             + alaga(p, (Coord){c.lin, c.col-1}, o, d);
}

void borda(int p[][COL], int l, int c) {
    for (int i = 0; i <= l+1; i++) p[i][0] = p[i][c+1] = -1;
    for (int i = 0; i <= c+1; i++) p[0][i] = p[l+1][i] = -1;
}

void preenche(int p[][COL], int l, int c) {
    for (int i = 1; i <= l; i++)
        for (int j = 1; j <= c; j++) scanf("%d", &p[i][j]);
    borda(p, l, c);
}

int main(void) {
    int p[LIN][COL];
    int l, c, y, x, d;

    scanf("%d %d %d %d", &l, &c, &y, &x);
    scanf("%d", &d);
    preenche(p, l, c);
    printf("%d\n", alaga(p, (Coord){y, x}, p[y][x], d));
    return 0;
}
