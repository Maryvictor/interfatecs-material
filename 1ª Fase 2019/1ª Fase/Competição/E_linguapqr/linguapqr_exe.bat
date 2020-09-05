mkdir my_out
solutions\linguapqr.exe < in\inLinguapqr1.txt > my_out\outLinguapqr1.txt
solutions\linguapqr.exe < in\inLinguapqr2.txt > my_out\outLinguapqr2.txt
solutions\linguapqr.exe < in\inLinguapqr3.txt > my_out\outLinguapqr3.txt
solutions\linguapqr.exe < in\inLinguapqr4.txt > my_out\outLinguapqr4.txt
solutions\linguapqr.exe < in\inLinguapqr5.txt > my_out\outLinguapqr5.txt
solutions\linguapqr.exe < in\inLinguapqr6.txt > my_out\outLinguapqr6.txt
solutions\linguapqr.exe < in\inLinguapqr7.txt > my_out\outLinguapqr7.txt
solutions\linguapqr.exe < in\inLinguapqr8.txt > my_out\outLinguapqr8.txt
solutions\linguapqr.exe < in\inLinguapqr9.txt > my_out\outLinguapqr9.txt
pause
fc /L my_out\* out\*
pause
