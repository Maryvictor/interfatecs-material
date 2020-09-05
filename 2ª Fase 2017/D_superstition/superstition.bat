mkdir my_out
superstition.exe < in\inSupersticao0.txt > my_out\outSupersticao0.txt
superstition.exe < in\inSupersticao1.txt > my_out\outSupersticao1.txt
superstition.exe < in\inSupersticao2.txt > my_out\outSupersticao2.txt
superstition.exe < in\inSupersticao3.txt > my_out\outSupersticao3.txt
superstition.exe < in\inSupersticao4.txt > my_out\outSupersticao4.txt
superstition.exe < in\inSupersticao5.txt > my_out\outSupersticao5.txt
superstition.exe < in\inSupersticao6.txt > my_out\outSupersticao6.txt
superstition.exe < in\inSupersticao7.txt > my_out\outSupersticao7.txt
superstition.exe < in\inSupersticao8.txt > my_out\outSupersticao8.txt
superstition.exe < in\inSupersticao9.txt > my_out\outSupersticao9.txt
pause
fc /L my_out\* out\*
pause
