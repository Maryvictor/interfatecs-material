mkdir my_out
solutions\palavras.py < in\inPalavras1.txt > my_out\outPalavras1.txt
solutions\palavras.py < in\inPalavras2.txt > my_out\outPalavras2.txt
solutions\palavras.py < in\inPalavras3.txt > my_out\outPalavras3.txt
solutions\palavras.py < in\inPalavras4.txt > my_out\outPalavras4.txt
solutions\palavras.py < in\inPalavras5.txt > my_out\outPalavras5.txt
solutions\palavras.py < in\inPalavras6.txt > my_out\outPalavras6.txt
solutions\palavras.py < in\inPalavras7.txt > my_out\outPalavras7.txt
pause
fc /L my_out\* out\*
pause
