mkdir my_out
solutions\quadrados.exe < in\inQuadrados1.txt > my_out\outQuadrados1.txt
solutions\quadrados.exe < in\inQuadrados2.txt > my_out\outQuadrados2.txt
solutions\quadrados.exe < in\inQuadrados3.txt > my_out\outQuadrados3.txt
solutions\quadrados.exe < in\inQuadrados4.txt > my_out\outQuadrados4.txt
solutions\quadrados.exe < in\inQuadrados5.txt > my_out\outQuadrados5.txt
pause
fc /L my_out\* out\*
pause
