// Optimized O(n)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int i=0, j=nums.size()-1;
        vector<int> pos(2, -1);
        while(i<nums.size() && nums[i] != target){
            i++;
        }
        
        if(i==nums.size()){
            pos[0] = -1;
        }
        else{
            pos[0] = i;
        }
        
        while(j>=0 && nums[j] != target){
            j--;
        }
        
        if(j==-1){
            pos[1] = -1;
        }
        else{
            pos[1] = j;
        }
        
        return pos;
    }
};