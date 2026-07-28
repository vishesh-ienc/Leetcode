class Solution {
public:
    void sortColors(vector<int>& nums) {


    
    int n = nums.size();
    int l = 0 , r = n-1 , i = 0;
    int temp = 0 ; 
    
    while ( i <= r ){
         
     if (nums[i] == 0 ){
             
             temp = nums[l];
             nums[l] = nums[i];
             nums[i] = temp;
             
             l++;
             i++;
             
             }
        else if (nums[i] == 2 ){
             
             temp = nums[r];
             nums[r] = nums[i];
             nums[i] = temp;
    
             
             r--;
             
             }
       else {
           i++;
       }



        
    }

    }
};