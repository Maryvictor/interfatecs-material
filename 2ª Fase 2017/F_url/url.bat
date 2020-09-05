mkdir my_out
url.py < in\inUrl1.txt > my_out\outUrl1.txt
url.py < in\inUrl2.txt > my_out\outUrl2.txt
url.py < in\inUrl3.txt > my_out\outUrl3.txt
url.py < in\inUrl4.txt > my_out\outUrl4.txt
url.py < in\inUrl5.txt > my_out\outUrl5.txt
url.py < in\inUrl6.txt > my_out\outUrl6.txt
url.py < in\inUrl7.txt > my_out\outUrl7.txt
url.py < in\inUrl8.txt > my_out\outUrl8.txt
url.py < in\inUrl9.txt > my_out\outUrl9.txt
url.py < in\inUrl10.txt > my_out\outUrl10.txt
pause
fc /L my_out\* out\*
pause
