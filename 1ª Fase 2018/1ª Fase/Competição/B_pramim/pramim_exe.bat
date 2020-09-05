mkdir my_out
solutions\pramim.exe < in\inPramim1.txt > my_out\outPramim1.txt
solutions\pramim.exe < in\inPramim2.txt > my_out\outPramim2.txt
solutions\pramim.exe < in\inPramim3.txt > my_out\outPramim3.txt
solutions\pramim.exe < in\inPramim4.txt > my_out\outPramim4.txt
solutions\pramim.exe < in\inPramim5.txt > my_out\outPramim5.txt
solutions\pramim.exe < in\inPramim6.txt > my_out\outPramim6.txt
pause
fc /L my_out\* out\*
pause
