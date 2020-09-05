/*
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema H - Layout Linear                                  ║
║ Linguagem     :  C99                                                         ║
║ Compilador    :  Pelles C (8.00.60)                                          ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct componente {
    int altura;
    char esp_largura;
    int largura;
    char alinhamento;
    char conteudo[101];
} Componente;

int altura(Componente com[], int n) {
	int t = 0;
	for (int i = 0; i < n; i++) t += com[i].altura;
	return t;
}

int maximo(int a, int b) {
	return a > b ? a : b;
}

int tam_layout(Componente com[], int n, int t) {
	int m = 0;
	for (int i = 0; i < n; i++)
		if (com[i].esp_largura == 'A') m = maximo(m, com[i].largura);
 		else m = maximo(m, strlen(com[i].conteudo) * t);
	return m;
}

int main(void) {
    Componente com[100];
    char f, lixo[12], z, c[101];
    int n, t, a, l;
   	scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        scanf("%d%*c%c%*c", &a, &f);
        if (f == 'A')
            scanf("%d%*c", &l);
        else {
            scanf("%s%*c", lixo);
            l = lixo[0];
        }
        scanf("%c%*c", &z);
        gets(c);
        com[i].altura = a;
		com[i].esp_largura = f;
		com[i].largura = l;
		com[i].alinhamento = z;
		strcpy(com[i].conteudo, c);
    }
    scanf("%d", &t);

	printf("%d\n", altura(com, n));
	int tl = tam_layout(com, n, t);
	for (int i = 0; i < n; i++) {
		if (com[i].esp_largura == 'A') {
			int esp = tl - com[i].largura;
			switch (com[i].alinhamento) {
				case ('E'):
					printf("%d %d\n", 0, esp); break;
				case ('C'):
					printf("%d %d\n", esp / 2, esp / 2); break;
				default:
					printf("%d %d\n", esp, 0); break;
			}
		}
		else
			if (com[i].largura == 'W') {
				int esp = tl - strlen(com[i].conteudo) * t;
				switch (com[i].alinhamento) {
					case ('E'):
						printf("%d %d\n", 0, esp); break;
					case ('C'):
						printf("%d %d\n", esp / 2, esp / 2); break;
					default:
						printf("%d %d\n", esp, 0); break;
				}
			}
			else
				printf("0 0\n");
	}

    return 0;
}
