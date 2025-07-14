#include<iostream>
#include<vector>
using namespace std; 

int maxProfit(vector<int>& prices){
    if(prices.size() == 1){return 0;}
    
    int profit = 0, bestbuy = prices[0];
    
    for(int i = 1; i < prices.size(); i++){
        if(prices[i] > bestbuy){profit = max(profit, prices[i]-bestbuy);}
        bestbuy = min(bestbuy,prices[i]);
    }
 
    return profit;
}