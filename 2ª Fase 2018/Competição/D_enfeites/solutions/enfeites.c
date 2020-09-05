/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema D - Enfeites de Natal                              ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct enfeite {
    int caixa, codigo;
} Enfeite;

int cmp_cai(Enfeite *a, Enfeite *b) {
    return (b->caixa < a->caixa) - (a->caixa < b->caixa);
}

int cmp_cod(Enfeite *a, Enfeite *b) {
    return (a->codigo < b->codigo) - (b->codigo < a->codigo);
}

void intercala(Enfeite v[], int i, int m, int f, int (*cmp)(Enfeite *, Enfeite *)) {
    int a = i, b = m+1, c = 0;
    Enfeite *w = malloc((f-i+1) * sizeof(Enfeite));
    while (a <= m && b <= f) w[c++] = cmp(&v[a], &v[b]) <= 0 ? v[a++] : v[b++];
    while (a <= m) w[c++] = v[a++];
    while (b <= f) w[c++] = v[b++];
	while (i <= f) v[f--] = w[--c];
    free(w);
}

void merge_sort(Enfeite v[], int i, int f, int (*cmp)(Enfeite *, Enfeite *)) {
    if (i == f) return;
    int m = (i + f) / 2;
    merge_sort(v, i, m, cmp);
    merge_sort(v, m+1, f, cmp);
    intercala(v, i, m, f, cmp);
}

Enfeite *preenche(int n) {
    Enfeite *enf = malloc(n * sizeof(Enfeite));
    for (int i = 0; i < n; i++)
        scanf("%d %d", &enf[i].caixa, &enf[i].codigo);
    return enf;
}    

int main(void) {
    int n;
   	scanf("%d", &n);
	Enfeite *enf = preenche(n);
    merge_sort(enf, 0, n-1, cmp_cod);
    merge_sort(enf, 0, n-1, cmp_cai);
    for (int i = 0; i < n; i++) printf("%d\n", enf[i].codigo);
    return 0;
}
