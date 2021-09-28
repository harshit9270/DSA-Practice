// Optimized O(n)
class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
       
        int i = 0, j = numbers.size()-1; 
        while(i<j){
            if(numbers[i] + numbers[j] < target){
                    i++;
            }
            if(numbers[i] + numbers[j] > target){
                    j--;
            }
            if(numbers[i] + numbers[j] == target){
                    return {i+1,j+1};
            }
        }
        return {0,0};
    }
};