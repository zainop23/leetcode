// r
class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        reverse(s.begin(), s.end());
        int right=0, left=0, i=0;
        while(i<n){
            while(i<n && s[i]==' ') i++;
            while(i<n && s[i]!=' ') s[right++]=s[i++];
            
            reverse(s.begin()+left, s.begin()+right);
            if(left<right){
            s[right++]=' ';
            left=right;
            }
         }
         if(right>0) s.resize(right-1);
         return s;
        // int i=0;
        // string ans;
        // while(i<n){
        //     string word="";
        //     while(s[i]!= ' ' && i<n){
        //         word+=s[i];
        //         i++;
        //     }
        //     reverse(word.begin(), word.end());
        //     if(word.length() > 0) ans+= " " + word;
        //     i++;
        // }
        // return ans.substr(1);
    }
};