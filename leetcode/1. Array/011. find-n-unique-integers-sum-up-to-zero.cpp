// Optimized O(n)
class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> Ans;
        int sum = 0;
        for (int i = 0; i < n-1; i++){
            Ans.push_back(i+1);   
            sum += i+1;
        }
        Ans.push_back(-sum);
        return Ans;
    }
};