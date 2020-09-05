mkdir my_out
solutions\secrets.py < in\inSecrets1.txt > my_out\outSecrets1.txt
solutions\secrets.py < in\inSecrets2.txt > my_out\outSecrets2.txt
solutions\secrets.py < in\inSecrets3.txt > my_out\outSecrets3.txt
solutions\secrets.py < in\inSecrets4.txt > my_out\outSecrets4.txt
solutions\secrets.py < in\inSecrets5.txt > my_out\outSecrets5.txt
solutions\secrets.py < in\inSecrets6.txt > my_out\outSecrets6.txt
pause
fc /L my_out\* out\*
pause
