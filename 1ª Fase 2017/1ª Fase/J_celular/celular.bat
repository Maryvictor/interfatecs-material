mkdir my_out
celular.exe < in\inCelular1.txt > my_out\outCelular1.txt
celular.exe < in\inCelular2.txt > my_out\outCelular2.txt
celular.exe < in\inCelular3.txt > my_out\outCelular3.txt
celular.exe < in\inCelular4.txt > my_out\outCelular4.txt
celular.exe < in\inCelular5.txt > my_out\outCelular5.txt
celular.exe < in\inCelular6.txt > my_out\outCelular6.txt
celular.exe < in\inCelular7.txt > my_out\outCelular7.txt
celular.exe < in\inCelular8.txt > my_out\outCelular8.txt
celular.exe < in\inCelular9.txt > my_out\outCelular9.txt
pause
fc /L my_out\* out\*
pause
