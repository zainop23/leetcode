class Solution {
public:
    string largestOddNumber(string num) {
        string ans="";
        int n = num.length();
        for(int i=n-1; i>=0; i--){
            // if((int)(num[i])%2!=0) return num.substr(0,i+1); (beats 33%)
          //if((num[i]-'0')%2!=0)  return num.substr(0,i+1); // beats 100%
           if(num[i] & 1)  return num.substr(0,i+1);

        }
return "";
    }
};