class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        vector<int> count(26,0);

        for(char &ch : s){
            count[ch-'a']++;
        }
        for(char &ch : t){
            count[ch-'a']--;
        }
        bool allZero = all_of(begin(count), end(count), [] (int element){
        return element  ==0;
   });
    return allZero;
    }
};