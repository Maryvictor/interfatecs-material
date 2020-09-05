/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema I - Boleto                                         ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  B (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>

double valor(char b[]) {
    char v[] = {b[10],b[11],b[12],b[13],b[14],b[15],'.',b[16],b[17],'\0'};
    return atof(v);
}

int venceu(char b[]) {
    char v[] = {b[8],b[9],b[6],b[7],b[4],b[5],'\0'};
    char p[] = {b[26],b[27],b[24],b[25],b[22],b[23],'\0'};
    return atoi(v) < atoi(p);
}

int main(void) {
    char b[31];
    double adim = 0.0, inad = 0.0, v;
    while (scanf("%s", b) != EOF) {
        v = valor(b);
        if (venceu(b)) inad += v;
        else adim += v;
    }
    printf("%.2f-ADIMPLENTE\n", adim);
    printf("%.2f-INADIMPLENTE\n", inad);
    return 0;
}
