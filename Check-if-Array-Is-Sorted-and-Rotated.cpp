// Fro the array to be roatated and sorted, there can be only one pair of elements where lesser one comens after the greated one(i.e the pivotal element). 
class Solution {
public:
    bool check(vector<int>& nums) {
        int pivot=0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i-1]>nums[i]) pivot++;
        }
        // Check for the last element and first element.
        if(nums[nums.size()-1]>nums[0]) pivot++;
        if(pivot>1) return false;
        return true;
    }
};