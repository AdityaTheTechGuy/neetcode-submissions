class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>>groups;
        vector<vector<string>>result;
        
        for (const string& word : strs) {
            vector<int> freq(26, 0);

            for (int i = 0; i < word.length(); i++) {
                freq[word[i] - 'a']++;
            }

            string key = "";

            for (int i = 0; i < 26; i++) {
                key.append(to_string(freq[i]));
                key.append("#");
            }

            groups[key].push_back(word);
        }

        for(auto& entry : groups){
            result.push_back(entry.second);
        }
        return result;
    }
};
