class Solution {
public:
    void combi(vector<string> mp, string &ans, vector<string> &result, string digits,int i){
        if(ans.size()==digits.size()){
            result.push_back(ans);
            return;
        }
        //converting char to int
        for(auto c : mp[digits[i]-'0']){
            ans.push_back(c);
            combi(mp,ans,result,digits,i+1);
            ans.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> mp = {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"} ;
        vector<string> result;
        string ans="";
        combi(mp,ans,result,digits,0);
        return result;
    }
};