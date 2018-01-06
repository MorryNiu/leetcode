bool isOneBitCharacter(int* bits, int bitsSize) {
    int i,n=0;

    for (i = 2; i < bitsSize+1; i++) {
        if (!(bits[bitsSize-i])) {
            break;
        }
        n++;
    }

    if (n%2) {
        return 0;
    }

    return 1;
}
