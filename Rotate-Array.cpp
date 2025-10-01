// O(n) TC and O(1) SC
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k%=nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};

// O(n) SC
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n= nums.size();
        vector<int> res(n);
        for(int i = 0; i<n; i++){
            res[(i+k)%n]=nums[i];
        }
        for(int i=0; i<n; i++){
            nums[i]=res[i];
        }
    }
};
