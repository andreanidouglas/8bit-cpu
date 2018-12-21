#include <stdio.h>

#ifndef _8BITCPU
    #include "../headers/8bit-cpu.h"
#endif
#define _8BITCPU 


int main (int argc, char* argv[]){
    printf("%s: %d", registers[0].name, registers[0].value);

    return (0);
}

