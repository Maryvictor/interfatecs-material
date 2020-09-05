/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - Primeira fase                            ║
║ Programa      :  Problema I - Boleto                                         ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct data {
    int dia, mes, ano;
} Data;

double valor(char b[]) {
    char v[] = {b[10],b[11],b[12],b[13],b[14],b[15],'.',b[16],b[17],'\0'};
    return atof(v);
}

int venceu(char b[]) {
    Data v = {(b[4]-'0')*10 + b[5]-'0',
              (b[6]-'0')*10 + b[7]-'0',
              (b[8]-'0')*10 + b[9]-'0'};
    Data p = {(b[22]-'0')*10 + b[23]-'0',
              (b[24]-'0')*10 + b[25]-'0',
              (b[26]-'0')*10 + b[27]-'0'};
    if (v.ano < p.ano) return 1;
    if (v.ano == p.ano && v.mes < p.mes) return 1;
    if (v.ano == p.ano && v.mes == p.mes && v.dia < p.dia) return 1;
    return 0;
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
