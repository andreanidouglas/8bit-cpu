#include <stdio.h>
#include "8bit-cpu.h"
#include "memory.h"

int main(int argc, char *argv[])
{   
    

    print_registers();
    print_memory();

    return (0);
}

void print_registers()
{
    printf("\nRA %d: %d", registers[RA].name, registers[RA].value);
    printf("\nRB %d: %d", registers[RB].name, registers[RB].value);
    printf("\nRC %d: %d", registers[RC].name, registers[RC].value);
    printf("\nRD %d: %d", registers[RD].name, registers[RD].value);
    printf("\nRE %d: %d", registers[RE].name, registers[RE].value);
    printf("\nRF %d: %d", registers[RF].name, registers[RF].value);
    printf("\nPC %d: %d", registers[PC].name, registers[PC].value);
}

void init_memory_controller(memory_cell *memory, int memory_size)
{

}

// SET RA 0x10
void set_register_direct(reg *u_reg, unsigned short value)
{
    u_reg->value = value;
}

// MOV RA RB
void copy_register_from_register(reg *d_reg, reg *s_reg)
{
    d_reg->value = s_reg->value;
}

// ADD RB | RA = RA + RB
void add(reg *op_reg)
{
    registers[RA].value = registers[RA].value + op_reg->value;
}

// SUB RA RB | RA = RA - RB 
void sub(reg *op_reg)
{
    registers[RA].value = registers[RA].value - op_reg->value;
}

// JMP 0x1000
void jump(unsigned short address)
{
    registers[PC].value = address;
}