mkdir my_out
solutions\transferencias.py < in\inTransferencias1.txt > my_out\outTransferencias1.txt
solutions\transferencias.py < in\inTransferencias2.txt > my_out\outTransferencias2.txt
solutions\transferencias.py < in\inTransferencias3.txt > my_out\outTransferencias3.txt
solutions\transferencias.py < in\inTransferencias4.txt > my_out\outTransferencias4.txt
solutions\transferencias.py < in\inTransferencias5.txt > my_out\outTransferencias5.txt
solutions\transferencias.py < in\inTransferencias6.txt > my_out\outTransferencias6.txt
solutions\transferencias.py < in\inTransferencias7.txt > my_out\outTransferencias7.txt
pause
fc /L my_out\* out\*
pause
