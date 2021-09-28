// Optimized O(n)
class Solution {
public:
   int removeDuplicates(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int pos = 1;
        for(int i=1;i<nums.size();i++){
            if(nums[i] != nums[pos-1]){
                nums[pos] = nums[i];
                pos++;
            }
            else{
                continue;
            }
        }   
        return pos;
    }
};