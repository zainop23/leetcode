class Solution {
public:
    void getPerms(vector<int>& nums, int idx, vector<vector<int>>& result){
        int n=nums.size();
        if(idx==n){
            result.push_back(nums);
            return;
        }
        unordered_set<int> s;
        for(int i=idx; i<n; i++){
            if(s.find(nums[i])!=s.end()) continue;
            s.insert(nums[i]);
            swap(nums[idx],nums[i]);
            getPerms(nums,idx+1,result);
            swap(nums[i],nums[idx]);
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        vector<vector<int>> result;
        sort(nums.begin(),nums.end());
        getPerms(nums,0,result);
        return result;
    }
};