class Solution {
public:
    int subarraySum(vector<int>& nums, int k) { 

    map<int,int> mp;
    
    mp[0] = 1;

    int need ; 
    int prefix_sum = 0;
    int count = 0 ; 
    
    for ( int i = 0 ; i < nums.size() ; i++ ) {
        
        prefix_sum = prefix_sum + nums[i];
        need = prefix_sum - k ;
        
        if ( mp.find(need) != mp.end()){
            count = count + mp[need];
        }
        
        mp[prefix_sum]++ ;
    }
    
    return count;

         
        
    }
};