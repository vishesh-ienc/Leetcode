class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

    vector<int> nums_cpy (nums);
    vector<int> freq(nums.size());
    int curr_odd = 1 ; 
    int curr_even = 2 ; 
    
    // making the freq array // 
    
     for ( int i = 0 ; i < nums.size() ; i++){
        
        if (nums[i] > 0){
            freq[i] = 1;
        }
        else {
            freq[i] = 0;
        }  
    
     }
     
     // 0th position check // 
     
     if(freq[0] == 0 ) {
         
         nums[curr_odd] = nums_cpy[0];
         curr_even = 0;
         curr_odd+=2;
         
     }
     
     // main for loop // 
     
     for ( int i = 1 ; i < nums.size() ; i++ ){
         
        
             
             if ( freq[i] == 0 ) {
                 nums[curr_odd] = nums_cpy[i];
                 curr_odd+=2;
             }
          
         else {
             
             
                 nums[curr_even] = nums_cpy[i];
                 curr_even+=2;
             
             
         
  }
 
}

return nums;


        
    }
};