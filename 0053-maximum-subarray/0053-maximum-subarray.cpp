class Solution {
public:
    int maxSubArray(vector<int>& nums) {

            
    
    int start_index = 0 , size = nums.size() , end_index = -1,sum = 0;
    
    
    
    sum = nums[start_index];
    int temp_sum = nums[start_index];
    
    
    for ( int j = start_index + 1 ; j  < size ; j++){
        
        
        temp_sum = temp_sum + nums[j];

        
        if (nums[j] > temp_sum){
            start_index = j;
            end_index = j;
            temp_sum = nums[j];
         
        }
        if ( temp_sum > sum ) { 
            
            end_index = j ; 
            sum = temp_sum;     
        }
        
    
    
    
}

return sum;;
        
    }
};