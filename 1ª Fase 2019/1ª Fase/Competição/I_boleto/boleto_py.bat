mkdir my_out
solutions\boleto.py < in\inBoleto1.txt > my_out\outBoleto1.txt
solutions\boleto.py < in\inBoleto2.txt > my_out\outBoleto2.txt
solutions\boleto.py < in\inBoleto3.txt > my_out\outBoleto3.txt
solutions\boleto.py < in\inBoleto4.txt > my_out\outBoleto4.txt
solutions\boleto.py < in\inBoleto5.txt > my_out\outBoleto5.txt
solutions\boleto.py < in\inBoleto6.txt > my_out\outBoleto6.txt
pause
fc /L my_out\* out\*
pause
