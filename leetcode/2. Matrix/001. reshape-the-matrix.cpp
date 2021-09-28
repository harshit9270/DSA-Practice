// Unoptimized O(n^2)
class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        vector<vector<int>> res(r,vector<int>(c,0));
        
        if(mat.size() * mat[0].size() != r * c){
            return mat;
        }
        else{
            int a = 0, b = 0;
            for(int i=0; i<r; i++){
                for(int j=0; j<c; j++){
                    if(b == mat[0].size()){
                        b = 0; 
                        a++;
                    }
                    res[i][j] = mat[a][b]; 
                    b++;
                }
            }
        }
        
        return res;
    }
};