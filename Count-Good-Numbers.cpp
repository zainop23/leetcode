// for every even position there are 5 posibilities: 0,2,4,6,8
// for every odd position there are 4 possibilities: 2,3,5,7
// therefore if we can get the count of the number of odd places and even places , we can use the power function recursively to get the required answer. We keep modding by 10^9 + 7, to keep answer in integer.

#define mod 1000000007
class Solution {
public:
    long long pow(long long x, long long n){
        if(n==0) return 1;
        if(n%2==0) return pow((x%mod)*(x%mod),n/2)%mod;
        else return (x%mod)*pow((x%mod)*(x%mod),n/2)%mod;
    }
    int countGoodNumbers(long long n) {
       long long ans=(pow(5,n/2+n%2)*pow(4,n/2))%mod;  
       return ans;
    }
};