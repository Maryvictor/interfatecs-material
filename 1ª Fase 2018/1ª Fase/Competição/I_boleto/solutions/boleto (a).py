'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 1ª fase                                  ║
║ Programa      :  Problema I - Boleto                                         ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

class Data:
    def __init__(self, d, m, a):
        self.dia = d
        self.mes = m
        self.ano = a

def venceu(v, p):
    v = Data(int(v[:2]), int(v[2:4]), int(v[4:]))
    p = Data(int(p[:2]), int(p[2:4]), int(p[4:]))
    if v.ano < p.ano: return True
    if v.ano == p.ano and v.mes < p.mes: return True
    if v.ano == p.ano and v.mes == p.mes and v.dia < p.dia: return True
    return False

adim = 0
inad = 0
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
