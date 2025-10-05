class Solution {
public:
    int divide(int dividend, int divisor) {
        bool sign = true;
        if(divisor==1) return dividend;
        if(dividend >= 0 && divisor < 0) sign = false;
        if(dividend < 0 && divisor > 0) sign = false;
        if(dividend == INT_MIN && divisor== -1) return INT_MAX;
        long long n = abs((long long)dividend);
        long long d = abs((long long)divisor);
        long long ans=0;
        while(n>=d){
            long long count = 0;
            while(n >= (d << (count + 1))){
                count++;
            }
            n-= d << count;
            ans += 1 << count;
        }
        if(!sign) ans= -ans;
        if(ans<INT_MIN) return INT_MIN;
        if(ans>INT_MAX) return INT_MAX;
        return (int)ans;
    }
};