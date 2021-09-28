// Optimized 
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for(int i=0; i<nums.size(); i++){
            int temp = 0;
            while(nums[i]){
                temp ++;
                nums[i]/=10;
            }
            if(temp%2 == 0)
                count++;
        }
        return count;
    }
};