class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int missingCount = 0; 
        int current = 1; 
        int index = 0; 
        
        while (true) {
            if (index < arr.size() && arr[index] == current) {
                // number exists in arr, move forward
                index++;
            } else {
                // number is missing
                missingCount++;
                if (missingCount == k) return current;
            }
            current++;
        }
    }
};