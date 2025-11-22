TAR = test
CC = gcc
debugCFLAGS = -Wall -g -DDEBUG

$(TAR):main.o func.o
	$(CC) $(debugCFLAGS) main.o func.o -o $(TAR)
main.o:main.c
	$(CC) -c main.c -o main.o
func.o:func.c 
	$(CC) -c func.c -o func.o

.PHONY: clean
clean:
	if exist *.o del *.o
	if exist $(TAR).exe del $(TAR).exe
