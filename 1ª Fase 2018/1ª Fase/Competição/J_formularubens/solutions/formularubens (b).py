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
║ Versão        :  B (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Coord:
    def __init__(self, l, c):
        self.lin = l
        self.col = c

def pos_val(p, c, o, d):
    return p[c.lin][c.col] != -1 and o-d <= p[c.lin][c.col] <= o+d

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

def preenche(l, c):
    p = [[-1] * (c + 2)]
    for i in range(l):
        linha = input().split()
        p.append([-1]+[int(x) for x in linha]+[-1])
    p.append([-1] * (c + 2))
    return p

l, c, y, x = input().split()
l, c, y, x = int(l), int(c), int(y), int(x)
d = int(input())
p = preenche(l, c)
print(alaga(p, Coord(y, x), p[y][x], d))
