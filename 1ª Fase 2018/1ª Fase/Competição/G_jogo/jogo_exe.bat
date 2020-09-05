mkdir my_out
solutions\jogo.exe < in\inJogo1.txt > my_out\outJogo1.txt
solutions\jogo.exe < in\inJogo2.txt > my_out\outJogo2.txt
solutions\jogo.exe < in\inJogo3.txt > my_out\outJogo3.txt
solutions\jogo.exe < in\inJogo4.txt > my_out\outJogo4.txt
solutions\jogo.exe < in\inJogo5.txt > my_out\outJogo5.txt
solutions\jogo.exe < in\inJogo6.txt > my_out\outJogo6.txt
solutions\jogo.exe < in\inJogo7.txt > my_out\outJogo7.txt
pause
fc /L my_out\* out\*
pause
