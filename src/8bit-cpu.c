#include <stdio.h>
#include "8bit-cpu.h"

int main(int argc, char *argv[])
{
    printf("%d: %d", registers[RA].name, registers[RA].value);

    return (0);
}

// SET RA 0x10
void set_register_direct(reg *u_reg, unsigned short value)
{
    u_reg->value = value;
}

// MOV RA RB
void copy_register_from_register_direct(reg *d_reg, reg *s_reg)
{
    d_reg->value = s_reg->value;
}

// ADD RA RB
void add(reg *acc_reg, reg *op_reg)
{
    acc_reg->value = acc_reg->value + op_reg->value;
}

// SUB RA RB
void sub(reg *acc_reg, reg *op_reg)
{
    acc_reg->value = acc_reg->value - op_reg->value;
}

// JMP 0x1000
void jump(unsigned short address){
    registers[PC].value = address;
}