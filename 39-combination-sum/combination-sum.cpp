class Solution {
public:
    void solve(int index, vector<int>& arr, int target,
               vector<vector<int>>& ans, vector<int>& combin) {
        // base case
        if (target == 0) {
            ans.push_back(combin);
            return;
        }
        if (index >= arr.size() || target < 0) return;

        // include current element (stay on same index for unlimited use)
        combin.push_back(arr[index]);
        solve(index, arr, target - arr[index], ans, combin);
        combin.pop_back(); // backtrack

        // exclude current element (move to next index)
        solve(index + 1, arr, target, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        solve(0, arr, target, ans, combin);
        return ans;
    }
};