class Solution {
public:
    int maxDepth(string s) {
        int bracketCtr = 0;
        int maxDepth = 0;
        for(char c : s){
            if(c == '('){
                bracketCtr++;
                maxDepth = max(maxDepth, bracketCtr);
            }
            else if(c == ')'){
                bracketCtr--;
            }
        }
        return maxDepth;
    }
};
