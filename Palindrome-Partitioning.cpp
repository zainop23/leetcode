class Solution {
public:
    bool pel(string s){
        int p1=0;
        int p2=s.size()-1;
        while(p1<=p2){
            if(s[p1]!=s[p2]) return false;
            p1++;
            p2--;
        }
        return true;
    }
    void check(vector<vector<string>>& ans,string s,vector<string>& temp){
        if(s.size()==0){
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<s.size();i++){
            string str = s.substr(0,i+1);
            if(pel(str)){
                temp.push_back(str);
                check(ans,s.substr(i+1),temp);
                temp.pop_back();
            }
        }
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> temp;
        check(ans,s,temp);
        return ans;
    }
};