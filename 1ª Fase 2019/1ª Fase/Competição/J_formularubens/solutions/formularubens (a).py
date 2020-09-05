'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema J - Fórmula Rubens                                 ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Coord:
    def __init__(self, l, c):
        self.lin = l
        self.col = c

def pos_val(p, c, o, d):
    return 0 <= c.lin < len(p) and 0 <= c.col < len(p[c.lin]) and \
           p[c.lin][c.col] != -1 and o-d <= p[c.lin][c.col] <= o+d

def alaga(p, c, o, d):
    t = 0
    pilha = []
    pilha.append(c)
    while pilha != []:
        x = pilha.pop()
        if not pos_val(p, x, o, d): continue
        p[x.lin][x.col] = -1
        t += 1
        pilha.append(Coord(x.lin-1,x.col))
        pilha.append(Coord(x.lin,x.col+1))
        pilha.append(Coord(x.lin+1,x.col))
        pilha.append(Coord(x.lin,x.col-1))
    return t

def preenche(l):
    p = []
    for i in range(l):
        linha = input().split()
        p.append([int(x) for x in linha])
    return p

l, c, y, x = input().split()
l, c, y, x = int(l), int(c), int(y), int(x)
d = int(input())
p = preenche(l)
print(alaga(p, Coord(y-1, x-1), p[y-1][x-1], d))
