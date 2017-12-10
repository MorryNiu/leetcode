/* primary */

int HammingDistance(int x, int y){
    int res = 0, i, code = x ^ y;
    for (i = 0; i < 32; i++) {
        res += (code >> i) & 1;
    }
    return res;
}


/* improved approach */

int HammingDistance(int x, int y){
    int res = 0, code = x ^ y, i;
    while (code) {
        res++;
        code &= (code - 1); //always remove the right-most 1;
    }
    return res;
}
