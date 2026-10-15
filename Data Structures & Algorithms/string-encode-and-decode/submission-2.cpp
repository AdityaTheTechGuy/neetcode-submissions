class Solution {
public:

    string encode(vector<string>& strs) {
        string s = "";
        for(string& word : strs){
            s += to_string(word.length());
            s += "#";
            s.append(word);
        }
        return s;
    }

    vector<string> decode(string s) {
        int i = 0;
        vector<string>result;

        while(i < s.length()){
            string lenstr = "";
            while(s[i] != '#'){
                lenstr += s[i];
                i++;
            }
            i++;
            int len = stoi(lenstr);

            result.push_back(s.substr(i,len));
            i += len;
        }

        return result;
    }
};
