bool judgeCircle(char* moves){
    int len, i;
    int a[2];
    a[0] = 0;
    a[1] = 0;
    len = strlen(moves);
    for (i = 0; i < len; i++) {
        if (moves[i] == 'L') {
            a[0] += 1;
        }else if (moves[i] == 'R') {
            a[0] -= 1;
        }else if (moves[i] == 'U') {
            a[1] += 1;
        }else {
            a[1] -= 1;
        }
    }

    if (a[0] == 0 && a[1] == 0){
        return 1;
    }else{
        return 0;
    }
}
