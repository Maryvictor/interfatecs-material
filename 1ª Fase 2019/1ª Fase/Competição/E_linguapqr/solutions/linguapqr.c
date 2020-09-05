/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema E - Língua do PQR                                  ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <stdio.h>
#include <string.h>

#define TAM 101

void exibe(char c[]) {
	for (int i = 0; c[i]; i++)
		if (c[i] != '*') putchar(c[i]);
	putchar('\n');
}

void tira_espacos(char c[]) {
	for (int i = 0; c[i]; i++)
        if (c[i] == ' ') c[i] = '*';
}

void tira_r(char c[]) {
	for (int i = 1; c[i+1]; i++)
		if (c[i-1] == '*' && c[i] == 'R' && c[i+1] == '*')
            c[i] = strchr("?!,.", c[i+2]) ? '*' : ' ';
}

void tira_pq(char c[]) {
	for (int i = 0; c[i+1]; i++)
		if (c[i] == 'P' && c[i+1] == 'Q') c[i] = c[i+1] = '*';
}

int main(void) {
    char c[TAM];
    gets(c);
    tira_espacos(c);
	tira_r(c);
	tira_pq(c);
	exibe(c);
    return 0;
}
