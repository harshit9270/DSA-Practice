//O(n^2)
class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int> ans;
        for(int i=0; i<matrix.size(); i++){
            int min_in_row = INT_MAX, max_in_col = INT_MIN, col_min = 0;
            
            for(int j=0; j<matrix[i].size(); j++){
                if(matrix[i][j] < min_in_row){
                    min_in_row = matrix[i][j];
                    col_min = j;
                }
            }
            for(int j=0; j<matrix.size(); j++){
                if(matrix[j][col_min] > max_in_col){
                    max_in_col = matrix[j][col_min];
                }
            }
            
            if(min_in_row == max_in_col)
                ans.push_back(min_in_row);
            
        }
        
        return ans;
    }
};