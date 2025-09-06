#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Name matches the test harness: minOperations
    long long minOperations(vector<vector<int>>& queries) {
        long long ans = 0;
        for (auto &q : queries) {
            long long l = q[0], r = q[1];
            long long totalReductions = 0;

            long long start = 1;
            long long steps = 1;
            while (start <= r) {
                long long end = start * 4 - 1; // bucket: [start, end]
                long long left = max(l, start);
                long long right = min(r, end);
                if (left <= right) {
                    long long cnt = right - left + 1;
                    totalReductions += cnt * steps;
                }
                if (end >= r) break;
                start *= 4;
                steps++;
            }

            ans += (totalReductions + 1) / 2; // ceil(totalReductions/2)
        }
        return ans;
    }

    // optional alias if some tests call the other name
    long long minimumOperations(vector<vector<int>>& queries) {
        return minOperations(queries);
    }
};