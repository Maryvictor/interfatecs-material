'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema H - Poupança Multi-data                            ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Poupanca:
    def __init__(self, d, s, r):
        self.dia = int(d)
        self.saldo = float(s)
        self.resgate = float(r)

def exibe(p):
    for i in p:
        if i.resgate != 0:
            print("%d %.2f (resgate de %.2f)" % (i.dia, i.saldo, i.resgate))  

def primeiro(p, a):
    i = 0
    while p[i].dia <= a: i += 1
    i -= 1
    return i if i >= 0 else len(p)-1

def proximo(i, n):
    return i-1 if i > 0 else n-1

def retirada(p, a, r):
    i = primeiro(p, a)
    while r >= 0.001:
        p[i].resgate = r if r <= p[i].saldo else p[i].saldo
        r -= p[i].resgate
        p[i].saldo -= p[i].resgate
        i = proximo(i, len(p))

def total(p):
    t = 0
    for i in p: t += i.saldo
    return t

a, r = input().split()
a, r = int(a), float(r)
p = []
while True:
    try:
        d, s = input().split()
        p.append(Poupanca(d, s, 0))
    except:
        break

if total(p) < r:
    print('INSUFICIENTE')
else:
    retirada(p, a, r)
    exibe(p)
