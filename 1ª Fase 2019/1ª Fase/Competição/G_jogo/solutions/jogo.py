'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema G - Jogo de TV                                     ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

def mais_que_um(c, linha):
    qtd = 0
    if linha[0] == c: qtd += 1
    if linha[1] == c: qtd += 1
    if linha[2] == c: qtd += 1
    return qtd >= 2

def diferente(linha):
    a = linha[0]
    i = 1
    while i < len(linha) and a == linha[i]: i += 1
    if i < len(linha):
        return i - 1 if mais_que_um(linha[i], linha) else i
    else:
        return -1

contador = 0
while True:
    try:
        linha = input()
        contador += 1
        coluna = diferente(linha)
        if coluna != -1:
            print('LINHA %d COLUNA %d' % (contador, coluna + 1))
            break
    except:
        break
