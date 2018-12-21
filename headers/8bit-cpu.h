
typedef  struct {
    char name[3];
    short unsigned int value;

} reg;
enum{
    RA,
    RB,
    RC,
    RD,
    RE,
    RF,
    PC
};

reg registers[] = {
    {"RA", 0},
    {"RB", 0},
    {"RC", 0},
    {"RD", 0},
    {"RE", 0},
    {"RF", 0},
    {"PC", 0}
};

