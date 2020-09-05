'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema D - Impossível                                     ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

def pos_val(f, l, c):
    return 0 <= l < len(f) and 0 <= c < len(f[l]) and f[l][c] != '!'

def busca(p, f, l, c, o):
    if not pos_val(f, l, c) or f[l][c] != p[0]: return ''
    if len(p) == 1: return '(%d,%d).' % (l+1, c+1)
    orig, f[l][c] = f[l][c], '!'
    for i in range(len(o)):
        nl, nc = o[i](l, c)
        q = busca(p[1:], f, nl, nc, o)
        if q != '': return '(%d,%d),%s' % (l+1, c+1, q)
    f[l][c] = orig
    return ''

def encontra(p, f, l, c, o):
    for i in range(l):
        for j in range(c):
            coord = busca(p, f, i, j, o)
            if coord != '': return coord
    return ''

def ordem(o):
    for i in range(len(o)):
        if   o[i] == 'c': o[i] = lambda l,c: (l-1,c)
        elif o[i] == 'd': o[i] = lambda l,c: (l,c+1)
        elif o[i] == 'b': o[i] = lambda l,c: (l+1,c)
        else:             o[i] = lambda l,c: (l,c-1)

def preenche(l):
    f = []
    for i in range(l): f.append(list(input()))
    return f

p = input()
o = input().split()
ordem(o)
l, c = input().split()
l, c = int(l), int(c)
f = preenche(l)
coord = encontra(p, f, l, c, o)
print('impossivel!' if coord == '' else coord)
