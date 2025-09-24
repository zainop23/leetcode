class Solution {
public:
    void sum(vector<vector<int>> &result, vector<int> &ans, int k, int i, int s, int n){
        if(s==0 && ans.size()==k){
            result.push_back(ans);
            return;
        }
        if(i==10 || s<0) return;
        ans.push_back(i);
        sum(result, ans, k, i+1, s-i,n);
        ans.pop_back();
        sum(result, ans, k, i+1, s,n);

    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<vector<int>> result;
        vector<int> ans;
        sum(result,ans,k,1,n,n);
        return result;
    }
};