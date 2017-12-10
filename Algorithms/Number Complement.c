int findComplement(int num) {
    unsigned int code = ~0;

    while (code & num) {
        code <<= 1;
    }

    return ~code & ~num;
}


/* second approach */

int findComplement(int num) {
    unsigned int code = 1;

    while (code <= num) {
        code <<= 1;
    }

    return (code - 1) ^ num;
}
