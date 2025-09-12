// create a helper function generateSubsets(). At each step of the recursion call we can either include the number or exclude it. 

class Solution {
public:

    void generateSubsets(vector<int> &nums, int i, vector<int> &ans, vector<vector<int>> &result){
        if(i==nums.size()){
            result.push_back(ans);
            return;
        }
        //include
        ans.push_back(nums[i]);
        generateSubsets(nums,i+1,ans,result);
        //exclude
        ans.pop_back();
        generateSubsets(nums,i+1,ans,result);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> ans;
        vector<vector<int>> result;
        generateSubsets(nums,0,ans,result);
        return result;
    }
};