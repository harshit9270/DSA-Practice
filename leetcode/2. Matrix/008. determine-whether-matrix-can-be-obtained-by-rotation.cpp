// Optimized O(n)
class Solution {
public:
    
 vector<vector<int>> rotateMat(vector<vector<int>> &arr)
{
    vector<vector<int>> temp(arr.size(), vector<int>(arr.size(), 0));
    int a = 0;
    int b = 0;

    for (int j = 0; j < arr.size(); j++)
    {

        for (int i = arr.size() - 1; i >= 0; i--)
        {

            if (b == arr.size())
            {
                b = 0;
                a++;
            }

            temp[a][b] = arr[i][j];

            b++;
        }
    }

    return temp;
    
}
    
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        
         int times = 3;
        if(mat==target)
            return true;
        
        while(times--){
            
            // rotate mat and check if equal
            
            mat = rotateMat(mat);
            
            if(mat== target)
                return true;
            
            
            
        }
        return false;
        
    }
};