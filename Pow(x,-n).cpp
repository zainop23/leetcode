//binary exponentiation  

class Solution {
public:
    double pow(double x, long long n){
        if(n==0) return 1;
        if(n%2==0) return pow(x*x,n/2);
        else return x*pow(x*x,n/2);

    }
    double myPow(double x, int n) {
        double ans;
        long long N=n;
        if(n<0){
            ans=1/pow(x,-N);
        }
        else ans=pow(x,N);
        return ans;
    }
};