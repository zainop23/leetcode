class Solution {
public:
    bool isValid(vector<vector<char>>& board, int row, int col, char val){
        for(int i=0; i<9; i++){
            if(board[row][i]==val || board[i][col]==val) return false;
//             i/3 = row offset (jumps every 3).
//             i%3 = column offset (cycles 0→1→2).
            if(board[(row/3)*3 + i/3][(col/3)*3 + i%3]==val) return false; 
        }
        return true;
    }
    bool sudoku(vector<vector<char>>& board){
        for(int i=0; i<9; i++){
            for(int j=0; j<9; j++){
                if(board[i][j]=='.'){
                    for(char c= '1'; c<='9'; c++){
                        if(isValid(board,i,j,c)){
                            board[i][j]=c;
                            if(sudoku(board)==true) return true;
                            else board[i][j]='.';
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }
    void solveSudoku(vector<vector<char>>& board) {
        sudoku(board);
    }
};