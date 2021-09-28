// Optimized O(n)
class Solution {
public:
    string interpret(string command) {
        string answer;
        int i=0;
        while(i<command.size()){
            if(command[i] == 'G'){
                answer.append("G"); 
                i += 1;
            }
            else if(command[i] == '(' && command[i+1] == ')'){
                answer.append("o");
                i += 2;
            }
            else if(command[i] == '(' && command[i+1] == 'a' && command[i+2] == 'l' && command[i+3] == ')'){
                answer.append("al");
                i += 4;
            }
        }
        
        return answer;
    }
};