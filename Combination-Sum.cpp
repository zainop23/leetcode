class Solution {
public:
    void sum(vector<int>&nums, vector<int>& ans, vector<vector<int>> &result, int i, int s, int target){
        
        if(s==target){
            result.push_back(ans);
            return;
        }
        if(i==nums.size() || s>target) return;
        if(nums[i]<=target){
        ans.push_back(nums[i]);
        //repeat the same
        sum(nums,ans,result,i,s+nums[i],target);
        ans.pop_back();
        }
        sum(nums,ans,result,i+1,s,target);

    }
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        vector<int> ans;
        vector<vector<int>> result;
        sum(nums,ans,result,0,0,target);
        return result;
    }
};