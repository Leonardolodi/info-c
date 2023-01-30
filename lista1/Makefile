punteggi: main.o listaPiloti.o
	gcc -g -o punteggi main.o listaPiloti.o

listaPiloti.o: listaPiloti.c listaPiloti.h
	gcc -g -c listaPiloti.c

main.o: main.c listaPiloti.h
	gcc -g -c main.c