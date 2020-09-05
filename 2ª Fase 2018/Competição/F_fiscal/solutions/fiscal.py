'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema F - Fiscal de vestibular                           ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Candidato:
    def __init__(self, p, s, n):
        self.posicao = int(p)
        self.situacao = s
        self.nome = n

def incorretos(fi):
    t = 0
    for i in range(len(fi)):
        if (i+1) != fi[i].posicao: t += 1
    return t

q = int(input())
fi = []
for i in range(q):
    p, s, n = input().split(';')
    if    s == 'A': s = 1
    elif  s == 'O': s = 2
    elif  s == 'R': s = 3
    else:           s = 4
    fi.append(Candidato(p, s, n))

fi.sort(key=lambda x: x.nome)
fi.sort(key=lambda x: x.situacao)
print(incorretos(fi))
