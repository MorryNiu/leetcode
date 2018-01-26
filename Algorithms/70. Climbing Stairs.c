int climbStairs(int n) {
    if (n==0 && n==1) {
        return 1;
    }

    int f1 = 1, f2 = 1,temp;

    for (size_t i = 1; i < n; i++) {
        temp = f1;
        f1 += f2;
        f2 = temp;
    }

    return f1;
}
