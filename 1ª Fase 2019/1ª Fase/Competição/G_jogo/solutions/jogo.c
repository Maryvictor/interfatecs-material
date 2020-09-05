/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema G - Jogo de TV                                     ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <string.h>

int mais_que_um(char c, char linha[]) {
    int qtd = (linha[0] == c) + (linha[1] == c) + (linha[2] == c);
    return qtd >= 2;
}

int diferente(char linha[]) {
    char a = linha[0];
    int i = 1, tam = strlen(linha);
    while (i < tam && a == linha[i]) i++;
    if (i < tam)
        return mais_que_um(linha[i], linha) ? i - 1 : i;
    else
        return -1;
}

int main(void) {
    char linha[101];
    int contador = 0, coluna;
    while (scanf("%s", linha) != EOF) {
        contador++;
        coluna = diferente(linha);
        if (coluna != -1) {
            printf("LINHA %d COLUNA %d\n", contador, coluna + 1);
            break;
        }
    }
    return 0;
}
