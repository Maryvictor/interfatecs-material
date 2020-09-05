mkdir my_out
interfatecs.exe < in\inInterfatecs1.txt > my_out\outInterfatecs1.txt
interfatecs.exe < in\inInterfatecs2.txt > my_out\outInterfatecs2.txt
interfatecs.exe < in\inInterfatecs3.txt > my_out\outInterfatecs3.txt
interfatecs.exe < in\inInterfatecs4.txt > my_out\outInterfatecs4.txt
interfatecs.exe < in\inInterfatecs5.txt > my_out\outInterfatecs5.txt
interfatecs.exe < in\inInterfatecs6.txt > my_out\outInterfatecs6.txt
interfatecs.exe < in\inInterfatecs7.txt > my_out\outInterfatecs7.txt
interfatecs.exe < in\inInterfatecs8.txt > my_out\outInterfatecs8.txt
pause
fc /L my_out\* out\*
pause
