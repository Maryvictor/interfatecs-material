mkdir my_out
solutions\poupanca.py < in\inPoupanca1.txt > my_out\outPoupanca1.txt
solutions\poupanca.py < in\inPoupanca2.txt > my_out\outPoupanca2.txt
solutions\poupanca.py < in\inPoupanca3.txt > my_out\outPoupanca3.txt
solutions\poupanca.py < in\inPoupanca4.txt > my_out\outPoupanca4.txt
solutions\poupanca.py < in\inPoupanca5.txt > my_out\outPoupanca5.txt
pause
fc /L my_out\* out\*
pause
