// Optimized O(n)
class Solution {
public:
    vector<vector<int>> intervalIntersection(vector<vector<int>>& A, vector<vector<int>>& B) {
        vector<vector<int>> v;
        int i=0,j=0;
        while(i<A.size() && j<B.size()){
            int a=max(A[i][0], B[j][0]);
            int b=min(A[i][1], B[j][1]);
            if(a<=b) v.push_back({a,b});
            if(A[i][1] < B[j][1])   i++;
            else j++;
        }
        return v;
    }
};