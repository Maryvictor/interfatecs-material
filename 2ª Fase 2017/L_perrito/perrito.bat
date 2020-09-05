mkdir myout
perrito.py < in\inPerrito1.txt > myout\outPerrito1.txt
perrito.py < in\inPerrito2.txt > myout\outPerrito2.txt
perrito.py < in\inPerrito3.txt > myout\outPerrito3.txt
perrito.py < in\inPerrito4.txt > myout\outPerrito4.txt
perrito.py < in\inPerrito5.txt > myout\outPerrito5.txt
pause
fc /L myout\* out\*
pause
