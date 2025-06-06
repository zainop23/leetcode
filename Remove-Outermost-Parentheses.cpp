// create a count variable
// if count>0 add the s[i] to the answer, then increment count++
// else : first decrement count--; then check if count > 0 , if yes then add the s[i] to the answer. This way it will ignore the outer clsoing bracket

class Solution {
public:
    string removeOuterParentheses(string s) {
        int n = s.length();
        string ans = "";
        int count=0;
        for(int i = 0; i<n ; i++){
            if (s[i]=='(') { 
                if(count>0) ans+=s[i];
                count++;
            }
            else {
                count--;
                if(count>0) ans+=s[i];
            }
            }
            
        return ans;
        }
        
    
};
