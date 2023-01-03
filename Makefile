HEADERS = vergleich.h

default: groesser

groesser.o: groesser.c
	gcc -c groesser.c -o groesser.o

groesser: groesser.o vergleich.o
	gcc groesser.o vergleich.o -o groesser

clean: 
	-rm -f groesser.o
	-rm -f vergleich.o
	-rm -f vergleich
