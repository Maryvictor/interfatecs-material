mkdir myout
cabos.py < in\inCabos0.txt > myout\outCabos0.txt
cabos.py < in\inCabos1.txt > myout\outCabos1.txt
cabos.py < in\inCabos2.txt > myout\outCabos2.txt
cabos.py < in\inCabos3.txt > myout\outCabos3.txt
cabos.py < in\inCabos4.txt > myout\outCabos4.txt
cabos.py < in\inCabos5.txt > myout\outCabos5.txt
pause
fc /L myout\* out\*
pause
