// Unoptimized O(n^2)
class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        string shuffledString;
        for(int i=0; i<indices.size(); i++){
            int temp = -1;
            for (int j=0; j<indices.size(); j++){
                if (indices[j] == i){
                    temp = j;
                    break;
                }
            }
            shuffledString.push_back((s[temp]));
        } 
        
        return shuffledString;
    }
};