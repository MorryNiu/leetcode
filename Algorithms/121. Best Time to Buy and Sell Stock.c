int maxProfit(int* prices, int pricesSize) {
    int res = 0,p=0;

    if (!prices) {
        return res;
    }

    int f1 = prices[0];

    for (size_t i = 0; i < pricesSize; i++) {
        if (prices[i] < f1) {
            f1 = prices[i]
        }else if (prices[i] > f1 && ((p=prices[i] - f1) > res )) {
            res = p;
        }
    }

    return res;
}
