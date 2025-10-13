class Solution {
public:
    bool isAnagram(string w1, string w2){
        if (w1.length() != w2.length())
        return false;
        sort(w1.begin(),w1.end());
        sort(w2.begin(),w2.end());
        if(w1==w2) return true;
        return false;
    }
    vector<string> removeAnagrams(vector<string>& words) {
        int n = words.size();
        vector<string> ans;
        ans.push_back(words[0]);
        for(int i=1; i<n; i++){
            if(!isAnagram(words[i],ans.back())){ ans.push_back(words[i]);}
        }
        return ans;
    }
};