//concept of buckets 
class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n = nums.size();
        long long xorr=0;
        int b1=0, b2=0;
        for(auto it: nums) xorr^=it;
        // to get rightmost set bit
        long long rightmost = (xorr&(xorr-1))^xorr;
        for(auto it: nums){
            if(it&rightmost) b1^=it;
            else b2^=it;
        }
        return {b1,b2};
    }
};