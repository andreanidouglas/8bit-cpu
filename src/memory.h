#ifndef _MEMORY
#define _MEMORY

#define MEMORY_SIZE 255

typedef struct {
    int address;
    unsigned short value;


} memory_cell;

memory_cell memory[MEMORY_SIZE];

void print_memory();


#endif