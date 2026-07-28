class Solution {
public:
    int maxProfit(vector<int>& prices) {
    
  int buy_index = 0 , sell_index = 0 , min_index = 0;
    int profit = 0 , curr_profit = 0;
    
    for ( int i = 1 ; i < prices.size() ; i++ ){
         
         if ( prices[i] < prices[min_index]) {
             
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
      return profit;
    }
};