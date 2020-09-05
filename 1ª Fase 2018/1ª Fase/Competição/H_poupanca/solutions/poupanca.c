/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema H - Poupança Multi-data                            ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>

typedef struct poupanca {
    int dia;
    float saldo;
    float resgate;
} Poupanca;

void exibe(Poupanca p[], int n) {
    for (int i = 0; i < n; i++)
        if (p[i].resgate != 0)
            printf("%d %.2f (resgate de %.2f)\n", p[i].dia, p[i].saldo, p[i].resgate);
}

int primeiro(Poupanca p[], int n, int a) {
    int i = 0;
    while (p[i].dia <= a) i++;
    i--;
    return i >= 0 ? i : n-1;
}

int proximo(int i, int n) {
    return i > 0 ? i-1 : n-1;
}

void retirada(Poupanca p[], int n, int a, float r) {
    int i = primeiro(p, n, a);
    while (r > 0) {
        p[i].resgate = r <= p[i].saldo ? r : p[i].saldo;
        r -= p[i].resgate;
        p[i].saldo -= p[i].resgate;
        i = proximo(i, n);
    }
}

float total(Poupanca p[], int n) {
    float t = 0;
    for (int i = 0; i < n; i++) t += p[i].saldo;
    return t;
}

int main(void) {
    int a, d, i = 0;
    float r, s;
    Poupanca p[28];
	scanf("%d %f", &a, &r);
    while (scanf("%d %f", &d, &s) != EOF)
        p[i++] = (Poupanca){d, s, 0};
    if (total(p, i) < r) printf("INSUFICIENTE\n");
    else {
        retirada(p, i, a, r);
        exibe(p, i);
    }

    return 0;
}
