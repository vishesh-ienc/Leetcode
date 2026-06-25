
// Given an integer array nums, return all the triplets [nums[i], nums[j], nums[k]] such that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == 0.

// Notice that the solution set must not contain duplicate triplets.

 

// Example 1:

// Input: nums = [-1,0,1,2,-1,-4]
// Output: [[-1,-1,2],[-1,0,1]]
// Explanation: 
// nums[0] + nums[1] + nums[2] = (-1) + 0 + 1 = 0.
// nums[1] + nums[2] + nums[4] = 0 + 1 + (-1) = 0.
// nums[0] + nums[3] + nums[4] = (-1) + 2 + (-1) = 0.
// The distinct triplets are [-1,0,1] and [-1,-1,2].
// Notice that the order of the output and the order of the triplets does not matter.



#include <bits/stdc++.h>
using namespace std ;

int main() {
    vector <int> nums = {0,0,0};
    sort (nums.begin() , nums.end()) ;
    
   
    
    vector<vector<int>> ans ; 
    
    int left , sum , n = nums.size() , right;
    
    for ( int i = 0 ; i < n ; i++){
        
        
        left = i + 1 ; 
        right = n-1 ;
        
        if (  i > 0 && nums[i] == nums[i - 1]) {
            continue;
        }
        
        while ( left < right ) {
            
            sum = nums[i] + nums[left] + nums[right];
            
            if ( sum == 0 ) {
                ans.push_back({nums[i] , nums[left] , nums[right]});
                cout<<"ans" <<endl;
                
                while ( left < right && nums[left] == nums[left + 1]){
                    
                    left++;
                    
                }
                
                while ( left < right && nums[right] == nums[right - 1]){
                    
                    right--;
                    
                }
                
                left++;
                right--;
            }
            
            else if (sum < 0 ) {
                left++;
            } 
            else if (sum>0) {
                right--;
            }
        }
        
        
        
        
        
    }
    
    
    
  
      
    
}