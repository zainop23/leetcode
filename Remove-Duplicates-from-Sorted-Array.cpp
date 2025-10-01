//classic two pointer problem, track the unique elements with j and traverse the array with i.
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int j=1;
        for(int i=1; i<nums.size(); i++){
            if(nums[i]!=nums[i-1]){
                nums[j]=nums[i];
                j++;
            }
        }
        return j;
    }
};