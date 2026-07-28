class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

          int i = 0 ,  n = nums.size() ; 
            if ( n < k){
                return 0;
            }

         int j = k - 1;

        double array_total = 0 , max_avg = 0 , curr_max_avg = 0;

          for (; i <= j ; i++){
            array_total += nums[i];
          }


          max_avg = array_total / k;
          i = 0;

          while (j < n - 1 ) {
             
             i++ , j++;

             array_total = array_total - nums[i-1] + nums[j];
             curr_max_avg = array_total / k;

             if ( curr_max_avg > max_avg){
                max_avg = curr_max_avg;
             }
            
            

          }

    return max_avg;


        
    }
    
};