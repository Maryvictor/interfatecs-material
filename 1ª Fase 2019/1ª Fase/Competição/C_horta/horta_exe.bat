mkdir my_out
solutions\horta.exe< in\inHorta1.txt > my_out\outHorta1.txt
solutions\horta.exe< in\inHorta2.txt > my_out\outHorta2.txt
solutions\horta.exe< in\inHorta3.txt > my_out\outHorta3.txt
solutions\horta.exe< in\inHorta4.txt > my_out\outHorta4.txt
solutions\horta.exe< in\inHorta5.txt > my_out\outHorta5.txt
solutions\horta.exe< in\inHorta6.txt > my_out\outHorta6.txt
solutions\horta.exe< in\inHorta7.txt > my_out\outHorta7.txt
solutions\horta.exe< in\inHorta8.txt > my_out\outHorta8.txt
pause
fc /L my_out\* out\*
pause
