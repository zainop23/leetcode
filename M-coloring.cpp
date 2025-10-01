// TC : since there are m colours for each node m^n.
bool isSafe(vector<vector<int>> &mat, int m,vector<int> &color, int idx,int n,int col){
    for(int i=0; i<n; i++){
        if(mat[idx][i] && color[i]==col) return false;
    }
    return true;
}

bool solve(vector<vector<int>> &mat, int m,vector<int> &color, int idx,int n){
    if(idx==n) return true;
    for(int col=1; col<=m ;col++){
        if(isSafe(mat,m,color,idx,n,col)){
            color[idx]=col;
            if(solve(mat,m,color,idx+1,n)==true) return true;
            color[idx]=0;
    }
    }
    return false;

}

string graphColoring(vector<vector<int>> &mat, int m) {
    int n = mat.size();
    vector<int> color(n,0);
    if(solve(mat,m,color,0,n)) return "YES";
    return "NO";
}
