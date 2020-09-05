'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema ? - Boleto                                         ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  B (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

def venceu(v, p):
    return int(v[4:] + v[2:4] + v[:2]) < int(p[4:] + p[2:4] + p[:2])

adim, inad = 0, 0
while True:
    try:
        b = input()
        v = float(b[10:16] + '.' + b[16:18])
        if venceu(b[4:10], b[22:28]): inad += v
        else: adim += v
    except:
        break

print('%.2f-ADIMPLENTE' % adim)
print('%.2f-INADIMPLENTE' % inad)
