// Optimized O(n)
class Solution {
public:
    void rotate(vector<int>& arr, int k) {
        
        vector<int> temp(arr.size());
        
         
        for(int i  = 0 ;i  <  arr.size() ; i++){
            
            int idx = (i + k) % (arr.size());
            
            temp[idx] = arr[i];
            
        }
        
        arr = temp; 
        
    }
};