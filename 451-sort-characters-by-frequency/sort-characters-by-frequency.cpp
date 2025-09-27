class Solution {
public:
    string frequencySort(string s) {
        int freq[256] = {0};
        for(char c : s) freq[c]++;

        string result = "";
        while(result.size() < s.size()) {
            int maxFreq = 0;
            char maxChar;
            for(int i = 0; i < 256; i++) {
                if(freq[i] > maxFreq) {
                    maxFreq = freq[i];
                    maxChar = i;
                }
            }
            for(int i = 0; i < maxFreq; i++) result += maxChar;
            freq[maxChar] = 0;
        }

        return result;
    }
};