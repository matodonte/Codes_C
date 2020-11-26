.PHONY: clean, mrproper #on définit des cibles particulières. 

programme : main.o fonctions.o
	gcc -o programme -Wall main.o fonctions.o

main.o : main.c fonctions.h
	gcc -Wall -c main.c -o main.o

fonctions.o : fonctions.c fonctions.h
	gcc -Wall -c fonctions.c -o fonctions.o

clean: 
	rm -rf *.o

mrproper: clean
	rm programme



