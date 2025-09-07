class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v={0};
        for(int i=2; i<=n; i++){
            v[0]+=i;
            v.push_back(-i);
        }
        return v;
    }
};