HEADERS = kreisberechnung.h

all: kreis_a kreis_b kreis_c

kreis_a: kreis_a.o 
	gcc kreis_a.o -o kreis_a

kreis_a.o: kreis_a.c
	gcc -c kreis_a.c -o kreis_a.o
	
kreis_b: kreis_b.o 
	gcc kreis_b.o -o kreis_b

kreis_b.o: kreis_b.c
	gcc -c kreis_b.c -o kreis_b.o
	
kreis_c: kreisberechnung.o kreis_c.o 
	gcc kreisberechnung.o -o kreis_c
	gcc kreis_c.o -o kreis_c

kreis_c.o: kreis_c.c
	gcc -c kreis_c.c -o kreis_c.o

kreisberechnung.o: kreisberechnung.c
	gcc -c kreisberechnung.c kreis_c.o
	
clean: 
	-rm -f kreis_a.o
	-rm -f kreis_b.o
	-rm -f kreis_c.o
	-rm -f kreisberechnung.o
	-rm -f kreis_a
	-rm -f kreis_b
	-rm -f kreis_c
