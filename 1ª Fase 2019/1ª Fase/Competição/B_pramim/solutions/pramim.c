/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema B - Um pra você, um pra mim                        ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>

int main(void) {
    char p;
    int amigo = 0, n, nota, voce = 0;
    scanf("%c %d", &p, &n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nota);
        if (p == 'V') {
            voce += nota;
            p = 'A';
        }
        else {
            amigo += nota;
            p = 'V';
        }
    }
    printf("VOCE: %d AMIGO: %d\n", voce, amigo);
    return 0;
}
