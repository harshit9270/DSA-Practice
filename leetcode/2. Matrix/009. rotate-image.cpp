// Optimized (12ms)
class Solution {
public:
    void rotate(vector<vector<int>>& arr) {
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

        arr = temp;
    }
};