CC = gcc
CFLAGS = -g -Wall -Isrc
OBJ = obj
RM = rm
SRC = src

all: bit_cpu.o memory.o
	$(CC) $(CFLAGS) -o bit_cpu $(OBJ)/bit_cpu.o $(OBJ)/memory.o

bit_cpu.o:
	$(CC) $(CFLAGS) -c $(SRC)/8bit-cpu.c -o $(OBJ)/bit_cpu.o 

memory.o:
	$(CC) $(CFLAGS) -c $(SRC)/memory.c -o $(OBJ)/memory.o 

clean:
	$(RM) $(OBJ)/*
	$(RM) bit_cpu.exe