// Quite fast(4ms)
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        
        for(int i=0; i<arr.size(); i++){
            int check = arr[i];
            for(int j=0; j<arr.size(); j++){
                if(arr[i] == 2 * arr[j] && i!=j){
                    cout << arr[i] << arr[j]; 
                 return true;   
                }
                else{
                    continue;
                }
            }
        }
        return false;
    }
};