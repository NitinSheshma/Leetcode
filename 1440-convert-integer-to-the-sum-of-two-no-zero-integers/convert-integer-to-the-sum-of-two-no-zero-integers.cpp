class Solution {
public:
    vector<int> getNoZeroIntegers(int n) {
        int a = n;
        int b  = 0;
        int value = 1;
        //a+b ==n
        while(n>1){
            int take =1;
            if(n%2==1){
                take =2;
            }
            a = a-take*value;
            b = b+take * value;
            n= (n-take)/10;
            value *= 10;
        }
        return{a,b};
    }
};