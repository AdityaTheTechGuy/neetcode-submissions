class Solution {
public:
    bool CheckPalindrome(string &s, int start, int end){
        
        while (start < end){
            if (s[start] != s[end]){
                return false;
            }
            start++;
            end--;
        }
        return true;
    }

    void Backtrack(string &s , int j, vector<string> &path, vector<vector<string>> &ans){

        if(j == s.length()){
            ans.push_back(path);
            return;
        }
        
        for(int i = j ; i<s.length() ; i++){
            if (CheckPalindrome(s,j,i)){
                path.push_back(s.substr(j,i-j+1));
                
                Backtrack(s,i+1,path,ans);

                path.pop_back();

            }
        }
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>path;

        Backtrack(s,0,path,ans);

        return ans;
    }
};
