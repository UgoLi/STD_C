scan:10scan.o 10main.o
	gcc 10scan.o 10main.o -o scan

10scan.o:10scan.c 10scan.h
	gcc -c  10scan.c -o 10scan.o

10main.o:10main.c 10scan.h
	gcc -c -w  10main.c -o 10main.o

clean:
	rm -rf scan 10scan.o 10main.o
