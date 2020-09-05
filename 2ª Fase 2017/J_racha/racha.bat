mkdir my_out
racha.py < in\inRacha0.txt > my_out\outRacha0.txt
racha.py < in\inRacha1.txt > my_out\outRacha1.txt
racha.py < in\inRacha2.txt > my_out\outRacha2.txt
racha.py < in\inRacha3.txt > my_out\outRacha3.txt
racha.py < in\inRacha4.txt > my_out\outRacha4.txt
racha.py < in\inRacha5.txt > my_out\outRacha5.txt
racha.py < in\inRacha6.txt > my_out\outRacha6.txt
racha.py < in\inRacha7.txt > my_out\outRacha7.txt
racha.py < in\inRacha8.txt > my_out\outRacha8.txt
racha.py < in\inRacha9.txt > my_out\outRacha9.txt
pause
fc /L my_out\* out\*
pause
