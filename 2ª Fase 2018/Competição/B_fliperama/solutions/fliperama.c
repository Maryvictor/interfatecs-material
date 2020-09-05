/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor (1)     :  Silvio do Lago Pereira                                      ║
║ Autor (2)     :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema B - Fliperama                                      ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <limits.h>
#include <stdio.h>

#define VAZIO INT_MIN

typedef struct memo {
    int dados[500][500];
    int u_lin;
    int u_col;
} Memo;

int max(int a, int b) {
    return a > b ? a : b;
}

int min(int a, int b) {
    return a < b ? a : b;
}

Memo memo;

int maximo_m(int **f, int l, int c) {
    if (l == f.u_lin || c == f.u_col) return f[l][c];
    if (memo[l][c] == VAZIO)
        memo[l][c] = f[l][c] + max(maximo_m(f, l+1, c), maximo_m(f, l, c+1));
    return memo[l][c];
}

int minimo_m(int **f, int l, int c) {
    if (l == f.u_lin || c == f.u_col) return f[l][c];
    if (memo[l][c] == VAZIO)
        memo[l][c] = f[l][c] + min(minimo_m(f, l+1, c), minimo_m(f, l, c+1));
    return memo[l][c];
}

int main(void) {
    int n;
    scanf("%d", &n);
    int flip[n][n];
    for (int i = 0; i < n; i++)
        for (int j = i; j < n; j++)
            scanf("%d", &flip[i][j]);
    printf("maximo: %d\n", maximo_m(flip, 0, 0));
    printf("maximo: %d\n", minimo_m(flip, 0, 0));
    return 0;
}
