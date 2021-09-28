// Optimized O(n)
class Solution {
public:
    bool isPalindrome(string s) {
        string alpha_s = "";
        
        for(int i=0; i <= s.size(); i++){
            if(s[i]>='A' && s[i]<='Z'){ 
            //adding uppercase letters
            alpha_s.append(1,s[i]+32);
            }
            else if(s[i]>='a' && s[i]<='z'){ 
            //adding lowercase letters
            alpha_s.append(1,s[i]);
            }
            else if(s[i]>='0' && s[i]<='9'){ 
            //adding numbers
            alpha_s.append(1,s[i]);
            }
            else{
            continue;
            }
        }
            
        bool ans = true;    
        for(int i=0, j=alpha_s.size()-1; i<=j; i++,j--){
            if(alpha_s[i] != alpha_s[j]){
                ans = false;
                break;
            }
        }
            
        return ans;

    }
};