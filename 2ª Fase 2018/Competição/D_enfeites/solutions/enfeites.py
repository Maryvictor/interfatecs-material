'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema D - Enfeites de Natal                              ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Enfeite:
    def __init__(self, cai, cod):
        self.caixa = cai
        self.codigo = cod

def preenche(n):
    enf = []
    for i in range(n):
        cai, cod = input().split()
        cai, cod = int(cai), int(cod)
        enf.append(Enfeite(cai, cod))
    return enf

n = int(input())
enf = preenche(n)
enf.sort(key = lambda x: x.codigo, reverse = True)
enf.sort(key = lambda x: x.caixa)
for e in enf: print(e.codigo)
