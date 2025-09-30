class Solution {
public:
    bool search(vector<vector<char>>& board, string &word, int i, int j, int idx, int m, int n){
        if(idx==word.size()){
            return true;
        }

        if(i<0 || i==m || j<0 || j==n || word[idx]!=board[i][j] || board[i][j]=='!') return false;
        char c = board[i][j];
        board[i][j]='!';
        bool left = search(board, word, i , j-1, idx+1, m , n);
        bool right = search(board, word, i , j+1, idx+1, m , n);
        bool up = search(board, word, i-1 , j, idx+1, m , n);
        bool down = search(board, word, i+1 , j, idx+1, m , n);
        board[i][j]=c;
        return left || right || up || down;
        
    }
    bool exist(vector<vector<char>>& board, string word) {
        int m=board.size();
        int n=board[0].size();
        int i,j;
        for(i=0; i<m; i++){
            for(j=0;j<n; j++){
                if(board[i][j]==word[0]){
                if(search(board,word, i, j, 0, m, n)) return true;

                }
            }
        }
        return false;
    }
};