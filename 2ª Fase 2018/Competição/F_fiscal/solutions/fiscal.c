/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema F - Fiscal de vestibular                           ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CAND 100000
#define NOME 51

typedef char String[NOME];

typedef struct candidato {
    int posicao;
    char situacao;
    String nome;
} Candidato;

int incorretos(Candidato fi[], int q) {
    int t = 0;
    for (int i = 0; i < q; i++)
        if ((i+1) != fi[i].posicao) t++;
    return t;
}

int cmp_int(Candidato *a, Candidato *b) {
    return (b->situacao < a->situacao) - (a->situacao < b->situacao);
}

int cmp_str(Candidato *a, Candidato *b) {
    return strcmp(a->nome, b->nome);
}

void intercala(Candidato v[], int i, int m, int f, int (*cmp)(Candidato *, Candidato *)) {
    int a = i, b = m+1, c = 0;
    Candidato *w = malloc((f-i+1) * sizeof(Candidato));
    while (a <= m && b <= f) w[c++] = cmp(&v[a], &v[b]) <= 0 ? v[a++] : v[b++];
    while (a <= m) w[c++] = v[a++];
    while (b <= f) w[c++] = v[b++];
    while (i <= f) v[f--] = w[--c];
    free(w);
}

void merge_sort(Candidato v[], int i, int f, int (*cmp)(Candidato *, Candidato *)) {
    if (i == f) return;
    int m = (i + f) / 2;
    merge_sort(v, i, m, cmp);
    merge_sort(v, m+1, f, cmp);
    intercala(v, i, m, f, cmp);
}

int main(void) {
    int q;
    Candidato *fi = malloc(CAND * sizeof(Candidato));
    scanf("%d", &q);
    for (int i = 0; i < q; i++) {
        scanf("%d%*c%c%*c", &fi[i].posicao, &fi[i].situacao);
        gets(fi[i].nome);
        switch(fi[i].situacao) {
            case ('A'):
                fi[i].situacao = 1; break;
            case ('O'):
                fi[i].situacao = 2; break;
            case ('R'):
                fi[i].situacao = 3; break;
            default:
                fi[i].situacao = 4; break;
        }
    }
    merge_sort(fi, 0, q-1, cmp_str);
    merge_sort(fi, 0, q-1, cmp_int);
    printf("%d\n", incorretos(fi, q));
    return 0;
}
