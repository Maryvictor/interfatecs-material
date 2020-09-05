mkdir my_out
logistica.py < in\inLogistica1.txt > my_out\outLogistica1.txt
logistica.py < in\inLogistica2.txt > my_out\outLogistica2.txt
logistica.py < in\inLogistica3.txt > my_out\outLogistica3.txt
logistica.py < in\inLogistica4.txt > my_out\outLogistica4.txt
logistica.py < in\inLogistica5.txt > my_out\outLogistica5.txt
logistica.py < in\inLogistica6.txt > my_out\outLogistica6.txt
logistica.py < in\inLogistica7.txt > my_out\outLogistica7.txt
logistica.py < in\inLogistica8.txt > my_out\outLogistica8.txt
logistica.py < in\inLogistica9.txt > my_out\outLogistica9.txt
logistica.py < in\inLogistica10.txt > my_out\outLogistica10.txt
pause
fc /L my_out\* out\*
pause
