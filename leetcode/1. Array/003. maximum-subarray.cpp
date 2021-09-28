// Optimized O(n)
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         // kadane's algorithm
         int max_so_far = INT_MIN;
         int max_here = 0;
        
         for(int i =0  ; i < nums.size() ; i++){

             max_here+= nums[i];
             max_so_far = max( max_so_far , max_here);


             if(max_here < 0){
                 max_here = 0;

             }
         }

         return max_so_far;

    }
};