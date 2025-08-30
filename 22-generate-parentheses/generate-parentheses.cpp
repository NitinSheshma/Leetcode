class Solution {
public:
    void solve(vector<string> &result, int n, int open, int close, string s) {
        if (open == n && close == n) {
            result.push_back(s);
            return;
        }
        if (open < n) {
            solve(result, n, open + 1, close, s + "(");
        }
        if (close < open) {
            solve(result, n, open, close + 1, s + ")");
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> result;
        solve(result, n, 0, 0, "");
        return result;
    }
};

