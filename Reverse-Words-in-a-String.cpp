// for O(n) space complexity
// 1. Reverse the string
// 2. go through each word and reverse it
// 3. store the reversed word in another string
// 4. return the str.substr(1) meaning it will start from str[1]

// for O(1) space complexity
// 1. reverse the string
// 2. initialize the right, left ptr to 0
// 3. while(i<n && i==' ') : counts the number of spaces before the word
// 4. while(i<n && s[i]!=' ') s[right++]=s[i++] : start modifying the string
// 5. reverse the string from reverse(s.begin()+left, s.begin()+right); then left = right
// 6. add a space in the end
// 7. resize the string to remove the last space
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
        
        //brute force
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
