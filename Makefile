CC = gcc
CFLAGS = -g -Wall -Isrc
OBJ = obj
RM = rm
SRC = src

all: bit_cpu.o
	$(CC) $(CFLAGS) -o bit_cpu $(OBJ)/bit_cpu.o

bit_cpu.o:
	$(CC) $(CFLAGS) -c $(SRC)/8bit-cpu.c -o $(OBJ)/bit_cpu.o 

clean:
	$(RM) $(OBJ)/*
	$(RM) bit_cpu.exe