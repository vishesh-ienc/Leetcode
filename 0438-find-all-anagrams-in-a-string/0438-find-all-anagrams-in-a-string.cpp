class Solution {
public:
    vector<int> findAnagrams(string s, string p) {


    int window_size = p.size();
    int left = 0;
    
    vector<int> freq_p(26,0); 
    vector<int> freq_window(26,0); 
    vector<int> indices;
    
    if (window_size > s.size()){
        return {};
    }
    
    
    for ( char c : p){
        freq_p[c - 'a']++;
    }
    
    for ( int i = 0 ; i < window_size ; i++ ){
        freq_window[s[i] - 'a']++;
    }
    
    if (freq_p == freq_window ){
        
        indices.push_back(0);
    }
    
    for ( int right = window_size ; right < s.size(); right++ ){
        
        left = right - window_size;
        
        freq_window[s[left] - 'a']--;
        freq_window[s[right] - 'a']++;
        
        if (freq_p == freq_window ){
        
        indices.push_back(left + 1);
        
         }
        
        
     }
     
     return indices;

        
        
    }
};