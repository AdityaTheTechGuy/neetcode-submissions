class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int>freqs(26,0);
        vector<int>freqt(26,0);

        for(char c : s){
            freqs[c - 'a']++;
        }
        for(char c : t){
            freqt[c-'a']++;
        }

        return freqs == freqt;
    }
};
