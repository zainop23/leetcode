class Solution {
public:
    void sum(vector<int>& nums, vector<int>& ans, vector<vector<int>>& result, int i, int s, int target){
        if(s==0){
            result.push_back(ans);
            return;
        }
        if(i==nums.size() || s<0) return;

        ans.push_back(nums[i]);
        sum(nums,ans,result,i+1,s-nums[i],target);
        ans.pop_back();
        int idx=i+1;
        while(idx<nums.size() && nums[idx]==nums[i]) idx++;
        sum(nums,ans,result,idx,s,target);
        
    }
    vector<vector<int>> combinationSum2(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<vector<int>> result;
        vector<int> ans;
        sum(nums,ans,result,0,target,target);
        return result;
    }
};