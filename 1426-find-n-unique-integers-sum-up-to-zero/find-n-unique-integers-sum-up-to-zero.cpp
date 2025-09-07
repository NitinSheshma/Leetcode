class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int > ans(n);
        int start = 1;
        int i=0;
        while(i+1 <n){
            ans[i] = start;
            ans[i+1] = -start;
            i = i+2;
            start++;
        }
        return ans;
    }
};