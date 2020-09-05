'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema A - Faith                                          ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Numero:
    def __init__(self, n, q):
        self.val = n
        self.qtd = q

def exibe(numeros, sonho):
    for i in range(5): print(numeros[sonho[i]-1].val, end = ' ')
    print(numeros[sonho[5]-1].val)

n = int(input())
numeros = [Numero(i, 0) for i in range(1,61)]
for i in range(n):
    jogo = [int(x) for x in input().split()]
    for j in jogo: numeros[j-1].qtd += 1
numeros.sort(key = lambda x: x.val)
numeros.sort(key = lambda x: x.qtd, reverse = True)
sonho = [int(x) for x in input().split()]
exibe(numeros, sonho)
