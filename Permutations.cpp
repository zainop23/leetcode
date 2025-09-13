// idx=0, i=0 → swap(0,0) → recurse idx=1
//     idx=1, i=1 → swap(1,1) → recurse idx=2
//         idx=2, i=2 → swap(2,2) → recurse idx=3 → push [1,2,3]
//     idx=1, i=2 → swap(1,2) → recurse idx=2 → push [1,3,2]
// idx=0 backtrack

// idx=0, i=1 → swap(0,1) → recurse idx=1
//     idx=1, i=1 → recurse idx=2 → push [2,1,3]
//     idx=1, i=2 → recurse idx=2 → push [2,3,1]
// idx=0 backtrack

// idx=0, i=2 → swap(0,2) → recurse idx=1
//     idx=1, i=1 → recurse idx=2 → push [3,2,1]
//     idx=1, i=2 → recurse idx=2 → push [3,1,2]
// idx=0 backtrack


class Solution {
public:

    void getPerms(vector<int>& nums, int idx, vector<vector<int>>& result){
        int n = nums.size();
        if(idx==n){
            result.push_back(nums);
            return;
        }
        for(int i=idx; i<n; i++){
            swap(nums[idx],nums[i]);
            getPerms(nums,idx+1,result);
            swap(nums[idx],nums[i]);
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> result;
        getPerms(nums,0,result);
        return result;
    }
};