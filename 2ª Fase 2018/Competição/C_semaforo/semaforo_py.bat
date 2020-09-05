mkdir my_out
solutions\semaforo.py < in\inSemaforo1.txt > my_out\outSemaforo1.txt
solutions\semaforo.py < in\inSemaforo2.txt > my_out\outSemaforo2.txt
solutions\semaforo.py < in\inSemaforo3.txt > my_out\outSemaforo3.txt
solutions\semaforo.py < in\inSemaforo4.txt > my_out\outSemaforo4.txt
solutions\semaforo.py < in\inSemaforo5.txt > my_out\outSemaforo5.txt
solutions\semaforo.py < in\inSemaforo6.txt > my_out\outSemaforo6.txt
solutions\semaforo.py < in\inSemaforo7.txt > my_out\outSemaforo7.txt
pause
fc /L my_out\* out\*
pause
