// Unoptimized (faster than 91.99%)
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(begin(nums), end(nums));
        int maximum = 0;
        int i = 0, j = nums.size() - 1;
        while(i < j){
            maximum = max(maximum, (nums[i++] + nums[j--]));
        }
        return maximum;
    }
};