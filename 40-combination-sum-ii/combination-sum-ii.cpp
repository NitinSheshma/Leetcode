class Solution {
public:
    void combinationSum(vector<int>& arr, int target, vector<int>& solve,int idx, vector<vector<int>>& ans){
        if(target  < 0){
            return;
        }
        if(target == 0){
            ans.push_back(solve);
            return;
        }
        for(int  i = idx; i<arr.size(); i++){
        if(i> idx && arr[i]== arr[i-1]){
                continue;
            }
            solve.push_back(arr[i]);//do
            combinationSum(arr,target-arr[i], solve, i+1, ans);
            solve.pop_back();
            

        }
    }
    vector<vector<int>> combinationSum2(vector<int>& arr, int target) {
       vector<vector<int>> ans;
       vector<int> solve;
       sort(begin(arr), end(arr));
       combinationSum(arr,target,solve,0,ans);
       return ans;
    }
};