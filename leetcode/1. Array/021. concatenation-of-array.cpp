// Optimized O(n)
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int i=2;
        while(i>0){
            for(int i=0; i<nums.size(); i++){
                ans.push_back(nums[i]);
            }
            i--;
        }
        
        return ans;
    }
};