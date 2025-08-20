class Solution {
public:
    double Solve(double x, long long n){
        if(n==0){
        return 1;
       } 
       if(n<0){
        return 1/Solve(x,-n);
       }
       double half =  myPow(x,n/2);
       if(n %2 ==0){
        return half * half;
       }else {
        return half * half *x;
       }
    }
    double myPow(double x, int n) {
      return Solve(x, long(n));
    }
};