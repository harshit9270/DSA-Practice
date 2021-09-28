// Optimized O(n)
class Solution {
public:
    string reverseWords(string s) {
        int j=0;
        for(int i=0; i<s.size(); i++){
            if(s[i] == ' '){
                reverse(s.begin()+j, s.begin()+i);
                j = i+1;
            }
        }
        // Since the last word exist after last space, lets handle it out of loop
        reverse(s.begin()+j, s.begin()+s.size());
        
        return s;
        
    }
};