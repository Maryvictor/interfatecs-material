'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor (1)     :  Silvio do Lago Pereira                                      ║
║ Autor (2)     :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema B - Fliperama                                      ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  Ingênua (Rev. 0)                                            ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

def maximo(f, l, c):
    if l == len(f)-1 or c == len(f[l])-1: return f[l][c]
    return f[l][c] + max(maximo(f, l+1, c), maximo(f, l, c+1))

def minimo(f, l, c):
    if l == len(f)-1 or c == len(f[l])-1: return f[l][c]
    return f[l][c] + min(minimo(f, l+1, c), minimo(f, l, c+1))

n = int(input())
flip = []
for i in range(n):
    linha = input().split()
    linha = [int(x) for x in linha]
    flip.append(linha)
print('maximo:', maximo(flip, 0, 0))
print('minimo:', minimo(flip, 0, 0))
