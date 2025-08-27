#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // ✅ Helper function to check if Koko can eat all bananas at speed k
    bool canEatAll(vector<int>& piles, int h, int k) {
        long long hours = 0;
        for (int pile : piles) {
            hours += (pile + k - 1) / k; // ceil(pile/k)
            if (hours > h) return false; // no need to continue if already exceeds
        }
        return hours <= h;
    }

    // ✅ Main function: binary search for minimum k
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1, right = *max_element(piles.begin(), piles.end());
        int ans = right;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (canEatAll(piles, h, mid)) {
                ans = mid;      // valid speed, try smaller
                right = mid - 1;
            } else {
                left = mid + 1; // too slow, increase speed
            }
        }
        return ans;
    }
};