class Solution {
public:
    int maxArea(vector<int>& height) {

            
    int i = 0 , j = height.size() - 1;
    int smaller_height = -1 , width = -1;
    
    
    int max_water = 0 , curr_water = 0; 
    
    while ( i < j ) {
        
        width = j - i;
        
        if ( height[i] <= height[j] ) {
            smaller_height = height[i];
        }
        else {
            smaller_height = height[j];
        }
     curr_water = smaller_height *  width;
     
     if ( curr_water > max_water) {
         max_water = curr_water ; 
         
     }
     
     if ( smaller_height == height[i]) {
         i++;
     }
     else {
         j--;
     }
     
        
    }
    
   return max_water;
        
    }
};