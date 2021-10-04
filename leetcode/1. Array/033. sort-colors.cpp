// Optimized O(n) (0 ms, faster than 100.00% of C++ online submissions)
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int j = nums.size()-1, k = 0;
        int i = 0;
        while(i <= j){
            if(nums[i] == 2){
                swap(nums[i],nums[j--]);
            }
            
            else if(nums[i] == 0){
                swap(nums[i],nums[k++]);
                i++;
            }
            
            else
                i++;
        }
    }   
};