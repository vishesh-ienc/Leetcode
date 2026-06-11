// Q.Best Time to Buy and Sell Stock

// You are given an array prices where prices[i] is the price of a given stock on the ith day.

// You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.

// Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.


#include <bits/stdc++.h>
using namespace std;

int main() {
    
    vector<int> prices = { 7,1,5,3,6,4};
    
    int buy_index = 0 , sell_index = 0 , min_index = 0;
    int profit = 0 , curr_profit = 0;
    
    for ( int i = 1 ; i < prices.size() ; i++ ){
         
         if ( prices[i] < prices[min_index]){
             
             min_index = i;
         }
         else {
             curr_profit = prices[i] - prices[min_index];
             
             if ( curr_profit > profit ){
                 profit = curr_profit;
                 buy_index = min_index;
                 sell_index = i;
             }
         }
             
         }
      cout << profit;
    }
    
 