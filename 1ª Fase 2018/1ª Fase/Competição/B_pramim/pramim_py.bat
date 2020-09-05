mkdir my_out
solutions\pramim.py < in\inPramim1.txt > my_out\outPramim1.txt
solutions\pramim.py < in\inPramim2.txt > my_out\outPramim2.txt
solutions\pramim.py < in\inPramim3.txt > my_out\outPramim3.txt
solutions\pramim.py < in\inPramim4.txt > my_out\outPramim4.txt
solutions\pramim.py < in\inPramim5.txt > my_out\outPramim5.txt
solutions\pramim.py < in\inPramim6.txt > my_out\outPramim6.txt
pause
fc /L my_out\* out\*
pause
