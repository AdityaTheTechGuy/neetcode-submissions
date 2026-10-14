class Solution {
public:

    string encode(vector<string>& strs) {
        string enc;
        for(string s : strs){
            enc.append(to_string(s.length()));
            enc.append("#");
            enc.append(s);
        }
        return enc;

    }

    vector<string> decode(string s) {
        vector<string>res;
        int i = 0;
        int n = s.length();

        while(i<n){
            int len = 0;

            while(i<n && s[i] != '#'){
            len = len*10 + (s[i]-'0');
            i++;
            }
            if(i>=n){
                break;
            }

            i++;

            

            string dec = s.substr(i,len);
            res.push_back(dec);

            i += len;
        }
        return res;
    }
};
