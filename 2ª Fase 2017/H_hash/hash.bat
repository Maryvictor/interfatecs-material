mkdir my_out
hash.py < in\inHash0.txt > my_out\outHash0.txt
hash.py < in\inHash1.txt > my_out\outHash1.txt
hash.py < in\inHash2.txt > my_out\outHash2.txt
hash.py < in\inHash3.txt > my_out\outHash3.txt
hash.py < in\inHash4.txt > my_out\outHash4.txt
hash.py < in\inHash5.txt > my_out\outHash5.txt
hash.py < in\inHash6.txt > my_out\outHash6.txt
hash.py < in\inHash7.txt > my_out\outHash7.txt
hash.py < in\inHash8.txt > my_out\outHash8.txt
hash.py < in\inHash9.txt > my_out\outHash9.txt
hash.py < in\inHash10.txt > my_out\outHash10.txt
pause
fc /L my_out\* out\*
pause
