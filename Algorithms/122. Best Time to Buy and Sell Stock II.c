int maxProfit(int prices[], int n){
    int profit=0,t;

    for(int i=0;i<n-1;i++){
        t = prices[i+1]-prices[i];

        if(t>0)
            profit += t;
    }

    return profit;
}
