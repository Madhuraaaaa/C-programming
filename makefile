all.exe:OP.c calculations.h
	gcc OP.c calculations.h -o all.exe

run: all.exe
	all.exe
 