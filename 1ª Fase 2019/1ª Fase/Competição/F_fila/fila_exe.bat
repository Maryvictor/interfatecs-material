mkdir my_out
solutions\fila.exe < in\inFila1.txt > my_out\outFila1.txt
solutions\fila.exe < in\inFila2.txt > my_out\outFila2.txt
solutions\fila.exe < in\inFila3.txt > my_out\outFila3.txt
solutions\fila.exe < in\inFila4.txt > my_out\outFila4.txt
solutions\fila.exe < in\inFila5.txt > my_out\outFila5.txt
solutions\fila.exe < in\inFila6.txt > my_out\outFila6.txt
solutions\fila.exe < in\inFila7.txt > my_out\outFila7.txt
pause
fc /L my_out\* out\*
pause
