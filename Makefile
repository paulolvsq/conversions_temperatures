FONCTIONS_C = fonctions.c
FONCTIONS_H = fonctions.h
MAIN_C = main.c
CC = gcc
CFLAGS = -Wall -Werror

all : execute

fonctions.o : $(FONCTIONS_H) $(FONCTIONS_C)
	$(CC) -c -o $@ $(FONCTIONS_C)

main.o : $(FONCTIONS_H) $(MAIN_C)
	$(CC) -c -o $@ $(MAIN_C)

execute : fonctions.o main.o
	$(CC) $(CFLAGS) -o $@ $^
	@echo "Done !"

clean : 
	rm -f *.o
	rm -f *~
	rm -f execute

.PHONY : all execute clean
