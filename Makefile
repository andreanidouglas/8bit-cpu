CC = gcc
CFLAGS = -g -Wall
OBJ = obj
RM = rm

all: bit_cpu.o
	$(CC) $(CFLAGS) -o bit_cpu $(OBJ)/bit_cpu.o

bit_cpu.o:
	$(CC) -c src/8bit-cpu.c -o $(OBJ)/bit_cpu.o -Iheaders $(CFLAGS)

clean:
	$(RM) $(OBJ)/*
	$(RM) bit_cpu.exe