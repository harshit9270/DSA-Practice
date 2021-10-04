// Optimized
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> spiral(n, vector<int>(n, 0));
        int i,k=0,l=0;
        int m = n;
        
        // k- starting row index
        // m- ending row index
        // l- starting column index
        // n- ending column index
        
        int value = 1;
        while(k<=m && l<=n){ 
            //this makes sure that there are elements in the matrix to be printed
            //Print first remaining row
            for(int i=l; i<n; i++){
                spiral[k][i] = value++;
            }
            k++;
                
            //Print last remaining column
            for(int i=k; i<m; i++){
                spiral[i][n-1] = value++;
            }
            n--;
            
            //Print last remaining row
            for(int i=n-1; i>=l; i--){
                spiral[m-1][i] = value++;           
            }
            m--;
            
            //Print first remaining column
            for(int i=m-1; i>=k; i--){
                spiral[i][l] = value++;
            }
            l++;
            
        }
        
        return spiral;
    }
};