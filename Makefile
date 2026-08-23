all: calculadora.o main.o
	gcc calculadora.o main.o -o main

calculadora.o: calculadora.h calculadora.c
	gcc -c calculadora.c

main.o: main.c calculadora.h calculadora.c
	gcc -c main.c

clean:
	rm *.o
	rm main
