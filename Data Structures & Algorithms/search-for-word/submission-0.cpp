class Solution {
public:
    bool backtrack(vector<vector<char>>& board, string& word,vector<vector<int>>& vis,int index,int i, int j ){
        if(i<0 || j<0 || i >= board.size() || j >= board[0].size() ||vis[i][j]==1|| board[i][j] != word[index]){
            return false;
        }
        if(index == word.size()-1){
            return true;
        }

        vis[i][j] = 1;

        bool found = backtrack(board,word,vis,index+1,i+1,j) || backtrack(board,word,vis,index+1,i-1,j) || backtrack(board,word,vis,index+1,i,j+1) || backtrack(board,word,vis,index+1,i,j-1);

        vis[i][j] = 0;
        return found;
    }
    bool exist(vector<vector<char>>& board, string& word){

        
        int m = board.size();
        int n = board[0].size();

        vector<vector<int>> vis(m, vector<int>(n, 0));

        for(int i = 0; i<m;i++){
            for(int j =0; j<n; j++){
                if(board[i][j] == word[0]) {

                    if(backtrack(board, word, vis, 0, i, j))
                        return true;
                }
            }
        }
        return false;
    }
};
