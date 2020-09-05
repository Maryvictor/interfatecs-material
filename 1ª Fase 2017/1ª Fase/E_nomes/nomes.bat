mkdir my_out
nomes.exe < in\inNomes1.txt > my_out\outNomes1.txt
nomes.exe < in\inNomes2.txt > my_out\outNomes2.txt
nomes.exe < in\inNomes3.txt > my_out\outNomes3.txt
nomes.exe < in\inNomes4.txt > my_out\outNomes4.txt
nomes.exe < in\inNomes5.txt > my_out\outNomes5.txt
nomes.exe < in\inNomes6.txt > my_out\outNomes6.txt
nomes.exe < in\inNomes7.txt > my_out\outNomes7.txt
nomes.exe < in\inNomes8.txt > my_out\outNomes8.txt
nomes.exe < in\inNomes9.txt > my_out\outNomes9.txt
nomes.exe < in\inNomes10.txt > my_out\outNomes10.txt
nomes.exe < in\inNomes11.txt > my_out\outNomes11.txt
pause
fc /L my_out\* out\*
pause
