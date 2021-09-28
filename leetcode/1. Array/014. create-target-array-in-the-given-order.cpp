// Optimized O(n)
class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int> target;
        int i=0;
        while(i<index.size()){
            target.insert(target.begin()+index[i],nums[i]);
            i++; 
        }
        return target;
    }
};