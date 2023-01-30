giornate: main.o listaGiornate.o
	gcc -g -o giornate main.o listaGiornate.o

listaGiornate.o: listaGiornate.c listaGiornate.h
	gcc -g -c listaGiornate.c

main.o: main.c listaGiornate.h
	gcc -g -c main.c
