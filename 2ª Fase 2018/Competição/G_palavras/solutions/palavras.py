'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema G - Jogo das Palavras                              ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

p1, p2 = input().split()

p1 = p1.lower()
p2 = p2.lower()

letras_p1 = [0 for i in range(26)]
letras_p2 = [0 for i in range(26)]

for i in p1: letras_p1[ord(i)-ord('a')] += 1
for i in p2: letras_p2[ord(i)-ord('a')] += 1

print('S' if letras_p1 == letras_p2 else 'N')
