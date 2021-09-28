// Optimized O(n log(n))
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int> running_sum;
        for(int i=0; i<nums.size(); i++){
            int temp = 0;
            for(int j=0; j<=i; j++){
                temp += nums[j]; 
            }   
            running_sum.push_back(temp);
        }
       
        return running_sum;
    }
};