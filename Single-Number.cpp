class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=0;
        for(int it : nums){
            ans^=it;
        }
        return ans;
    }
};