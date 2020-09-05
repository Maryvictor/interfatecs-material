'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema F - Fila do Almoço                                 ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

def repetidos(fun):
    return len(fun)-len(set(fun))

def invalidos(fun, sen):
    return len(set(fun).difference(set(sen)))

def almoco(fun, sen):
    return len(set(fun).intersection(sen))

s = int(input())
sen = input().split()
f = int(input())
fun = input().split()
print(almoco(fun, sen), 'A')
print(invalidos(fun, sen), 'I')
print(repetidos(fun), 'R')
