#include <bits/stdc++.h> 
int maximumProfit(vector<int> &prices){
    int n=prices.size();
    int maxprofit=0;
    int miniprice=prices[0];
    for(int i=1;i<n;i++)
    {
        miniprice=min(miniprice,prices[i]);
        maxprofit=max(maxprofit,prices[i]-miniprice);
    }
    return maxprofit;
}