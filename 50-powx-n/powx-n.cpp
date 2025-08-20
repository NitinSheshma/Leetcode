class Solution {
public:
    double myPow(double x, int n) {
        if(n==0) return 1.0;
        if(x == 0) return 0.0;
        if(x==1) return 1.0;
        if(x == -1 && n % 2 == 0) return 1.0;
        if(x == -1 && n % 2 != 0) return -1.0;

        long long  binarForm =n;
        if(n < 0){
            x = 1/x;
            binarForm = -binarForm;
        } 
        double ans = 1;
        while(binarForm  > 0){
            if(binarForm % 2 ==1){
                ans = ans * x;
            }
            x = x*x;
            binarForm /=2;
        }
        return ans;


    }
};