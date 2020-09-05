'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema H - Layout Linear                                  ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Componente:
    def __init__(self, alt, esp, lar, ali, con):
        self.altura = alt
        self.esp_largura = esp
        self.largura = lar
        self.alinhamento = ali
        self.conteudo = con

def altura(com):
    t = 0
    for c in com: t += c.altura
    return t

def tam_layout(com, t):
    m = 0
    for c in com:
        if c.esp_largura == 'A': m = max(m, c.largura)
        else: m = max(m, len(c.conteudo)*t)
    return m

def separa(linha, i):
    while linha[i] != ' ': i += 1
    return i

n = int(input())
com = []
for i in range(n):
    linha = input()
    ini = 0
    fim = separa(linha, ini)
    a = int(linha[ini:fim])
    ini = fim+1
    fim = separa(linha, ini)
    f = linha[ini:fim]
    ini = fim + 1
    fim = separa(linha, ini)
    if f == 'A':
        l = int(linha[ini:fim])
    else:
        l = linha[ini:fim]
    ini = fim + 1
    fim = separa(linha, ini)
    z = linha[ini:fim]
    c = linha[fim+1:]
    com.append(Componente(a, f, l, z, c))
t = int(input())

print(altura(com))
tl = tam_layout(com, t)
for c in com:
    if c.esp_largura == 'A':
        esp = tl - c.largura
        if c.alinhamento == 'E':
            print('%d %d' % (0, esp))
        elif c.alinhamento == 'C':
            print('%d %d' % (esp // 2, esp // 2))
        else:
            print('%d %d' % (esp, 0))
    else:
        if c.largura == 'WRAPCONTENT':
            esp = tl - len(c.conteudo) * t
            if c.alinhamento == 'E':
                print('%d %d' % (0, esp))
            elif c.alinhamento == 'C':
                print('%d %d' % (esp // 2, esp // 2))
            else:
                print('%d %d' % (esp, 0))
        else:
            print('0 0')
