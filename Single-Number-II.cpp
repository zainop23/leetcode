class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        for(int i=1; i<nums.size(); i+=3){
            if(nums[i]!=nums[i-1]) return nums[i-1];
        }
        return nums[nums.size()-1];
    }
};

// class Solution {
// public:
//     int singleNumber(vector<int>& nums) {
//         int ans = 0;
//         for(int bit = 0; bit<32; bit++){
//             int count=0;
//             for(int i=0; i<nums.size(); i++){
//                 if(1<<bit & nums[i]) count++;
//             }
//             if(count%3!=0) ans |= (1 << bit);
//         }
//         return ans;
//     }
// };