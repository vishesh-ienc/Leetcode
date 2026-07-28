class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

   int n = nums.size();
   vector<int> prefix(n,0) , suffix(n,0) , answer(n,0);
   
   
   // generating prefix array // 
    prefix[1] = nums[0];
    suffix[n-2] = nums[n-1];
    
    
    
    for ( int i = 2 ; i< n ; i++ ){
        
        prefix[i] = prefix[i-1] * nums[i-1];
         
    }
    
    
    for ( int i = n-3 ; i >= 0 ; i--){
        
        suffix[i] = suffix[i+1] * nums[i+1];
         
    }
     
    
    answer[0] = suffix[0];
    answer[n-1] = prefix[n-1];
    
    
    for (int i = 1 ; i < n-1 ; i++) {
        
        answer[i] = prefix[i] * suffix[i];
        
        
        
        
    }
    
    return answer;
    
        
    }
};