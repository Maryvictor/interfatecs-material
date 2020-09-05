mkdir my_out
solutions\fliperama.py < in\inFliperama1.txt > my_out\outFliperama1.txt
solutions\fliperama.py < in\inFliperama2.txt > my_out\outFliperama2.txt
solutions\fliperama.py < in\inFliperama3.txt > my_out\outFliperama3.txt
solutions\fliperama.py < in\inFliperama4.txt > my_out\outFliperama4.txt
solutions\fliperama.py < in\inFliperama5.txt > my_out\outFliperama5.txt
solutions\fliperama.py < in\inFliperama6.txt > my_out\outFliperama6.txt
solutions\fliperama.py < in\inFliperama7.txt > my_out\outFliperama7.txt
pause
fc /L my_out\* out\*
pause
