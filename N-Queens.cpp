class Solution {
public:
    bool isSafe(vector<string> &board, int row, int col,int n){
        int r=row, c=col;
        //check for row
        for(int i=0; i<n; i++){
            if(board[row][i]=='Q') return false;
        }
        //check for column
        for(int i=0; i<n; i++){
            if(board[i][col]=='Q') return false; 
        }
        //check for left diagonal
        for(int i=r,j=c; i>=0 && j>=0; i--,j--){
            if(board[i][j]=='Q') return false;
        }
        //check for right diagonal
        for(int i=r,j=c; i>=0 && j<n; i--,j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }
    void nQueens(vector<string> &board, vector<vector<string>> &ans, int row, int n){
        if(row==n){
            ans.push_back(board);
            return;
        }
        for(int i=0; i<n; i++){
            if(isSafe(board,row,i,n)){
            board[row][i]='Q';
            nQueens(board,ans,row+1,n);
            board[row][i]='.';
        }
        }
        
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nQueens(board,ans,0,n);
        return ans;
    }
};