'''
╔══════════════════════════════════════════════════════════════════════════════╗
║ Instituição   :  Faculdade de Tecnologia de São Paulo                        ║
║ Departamento  :  Tecnologia da Informação                                    ║
║ Curso         :  Análise e Desenvolvimento de Sistemas                       ║
║ Autor         :  Lucio Nunes de Lira                                         ║
╠══════════════════════════════════════════════════════════════════════════════╣
║ Competição    :  InterFatecs 2018 - 2ª fase                                  ║
║ Programa      :  Problema A - InterFatecs Secrets                            ║
║ Linguagem     :  Python 3                                                    ║
║ Compilador    :  CPython (3.6.4)                                             ║
║ Versão        :  A (Rev. 0)                                                  ║
╚══════════════════════════════════════════════════════════════════════════════╝
'''

from math import floor, sqrt
from string import ascii_lowercase

'''───────────────────────────────────────────────
Primo
───────────────────────────────────────────────'''
def eh_pri(n):
    if n % 2 == 0: return n == 2
    divisor = 3
    raiz = floor(sqrt(n))
    while divisor <= raiz and n % divisor != 0:
        divisor += 2
    return n > 1 and divisor > raiz

'''───────────────────────────────────────────────
Fibonacci
───────────────────────────────────────────────'''
def eh_fib(n):
    a, b = 1, 1
    while a < n: a, b = b, a+b
    return a == n

'''───────────────────────────────────────────────
Fatorial
───────────────────────────────────────────────'''
def eh_fat(n):
    f = 1
    i = 2
    while f < n:
        f *= i
        i += 1
    return f == n

'''───────────────────────────────────────────────
Valor do código
───────────────────────────────────────────────'''
def numero(cod):
    n = 0
    for i, c in enumerate(cod):
        if c in ascii_lowercase:
            n += (ord(c)-ord('a') + 1) * (i+1)
        else:
            n += (ord(c)-ord('0')) * (i+1)
    return n

while True:
    try:
        n = numero(input())
        if   eh_fat(n): print('%d: ultimate' % n)
        elif eh_fib(n): print('%d: premium'  % n)
        elif eh_pri(n): print('%d: basic'    % n)
        else:           print('%d: !'        % n)
    except:
        break
