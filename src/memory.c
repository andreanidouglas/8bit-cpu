#include <stdio.h>

#include "memory.h"

void print_memory()
{
    int i;
    for (i=0;i<MEMORY_SIZE;i++){
        printf("%d: %d", memory[i].address, memory[i].value);
    }
}