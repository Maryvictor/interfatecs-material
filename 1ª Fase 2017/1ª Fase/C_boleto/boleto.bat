mkdir my_out
bol.exe < in\inBoleto1.txt > my_out\outBoleto1.txt
bol.exe < in\inBoleto2.txt > my_out\outBoleto2.txt
bol.exe < in\inBoleto3.txt > my_out\outBoleto3.txt
bol.exe < in\inBoleto4.txt > my_out\outBoleto4.txt
bol.exe < in\inBoleto5.txt > my_out\outBoleto5.txt
bol.exe < in\inBoleto6.txt > my_out\outBoleto6.txt
bol.exe < in\inBoleto7.txt > my_out\outBoleto7.txt
bol.exe < in\inBoleto8.txt > my_out\outBoleto8.txt
bol.exe < in\inBoleto9.txt > my_out\outBoleto9.txt
bol.exe < in\inBoleto10.txt > my_out\outBoleto10.txt
bol.exe < in\inBoleto11.txt > my_out\outBoleto11.txt
pause
fc /L my_out\* out\*
pause
