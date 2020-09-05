/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema A - Faith                                          ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct numero {
    int val, qtd;
} Numero;

void inicia(Numero numeros[], int n) {
    for (int i = 0; i < n; i++) {
        numeros[i].val = i+1;
        numeros[i].qtd = 0;
    }
}

int cmp_qtd(Numero *a, Numero *b) {
    return (a->qtd < b->qtd) - (a->qtd > b->qtd);
}

int cmp_val(Numero *a, Numero *b) {
    return (a->val > b->val) - (a->val < b->val);
}

void exibe(Numero numeros[], int sonho[]) {
    for (int i = 0; i < 5; i++) printf("%d ", numeros[sonho[i]-1].val);
    printf("%d\n", numeros[sonho[5]-1].val);
}

void intercala(Numero v[], int i, int m, int f, int (*cmp)(Numero *, Numero *)) {
    int a = i, b = m+1, c = 0;
    Numero *w = malloc((f-i+1) * sizeof(Numero));
    while (a <= m && b <= f) w[c++] = cmp(&v[a], &v[b]) <= 0 ? v[a++] : v[b++];
    while (a <= m) w[c++] = v[a++];
    while (b <= f) w[c++] = v[b++];
	while (i <= f) v[f--] = w[--c];
    free(w);
}

void merge_sort(Numero v[], int i, int f, int (*cmp)(Numero *, Numero *)) {
    if (i == f) return;
    int m = (i + f) / 2;
    merge_sort(v, i, m, cmp);
    merge_sort(v, m+1, f, cmp);
    intercala(v, i, m, f, cmp);
}

int main(void) {
    int n, jogo[6];
    Numero numeros[60];
    inicia(numeros, 60);
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < 6; j++) scanf("%d", &jogo[j]);
        for (int j = 0; j < 6; j++) numeros[jogo[j]-1].qtd++;
    }
    merge_sort(numeros, 0, 59, cmp_val);
	merge_sort(numeros, 0, 59, cmp_qtd); 
	int sonho[6];
    for (int i = 0; i < 6; i++) scanf("%d", &sonho[i]);
	exibe(numeros, sonho);
    return 0;
}
