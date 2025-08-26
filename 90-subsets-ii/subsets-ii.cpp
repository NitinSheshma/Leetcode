class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int total = 1<<n;
        set<vector<int>> ans;
        for(int num= 0; num<total ; num++){
            vector<int> subset;

        for(int i=0; i<n; i++){
            if(num & (1<<i)){
                subset.push_back(nums[i]);
            }
        }
        ans.insert(subset);
        }
        return vector<vector<int>> (ans.begin(), ans.end());
    }
};