#ifndef _8BITCPU
#define _8BITCPU

typedef struct
{
    int name;
    unsigned short value;

} reg;

enum
{
    RA,
    RB, 
    RC,
    RD,
    RE,
    RF,
    PC
};

reg registers[] = {
    {RA, 0},
    {RB, 0},
    {RC, 0},
    {RD, 0},
    {RE, 0},
    {RF, 0},
    {PC, 0}};

void set_register_direct(reg *, unsigned short);
void copy_register_from_register(reg *d_reg, reg *s_reg);
void add(reg *acc_reg, reg *op_reg);
void sub(reg *acc_reg, reg *op_reg);

#endif