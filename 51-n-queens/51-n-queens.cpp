class Solution {
    bool isValid(vector<string> board,int row,int col,int n){
        
//         for(int i=row;row>=0;i--){
//             if(board[row][col]=='Q'){
//                 return false;
//             }
//         }
        int j=row;
        
        while(j>=0){
            if(board[j][col]=='Q'){
                return false;
            }
            j--;
        }
        
        int r=row-1;
        int c=col-1;
        while(r>=0 && c>=0){
            if(board[r][c]=='Q'){
                return false;
            }
            r--;
            c--;
        }
        
        r=row-1;
        c=col+1;
        
         while(r>=0 && c<n){
            if(board[r][c]=='Q'){
                return false;
            }
            r--;
            c++;
        }
        
        return true;
        
    }
    
    bool solve(vector<vector<string>> &res,int row,int n, vector<string> &board){
        if(row==n){
            res.push_back(board);
            return false;
        }
        
        for(int i=0;i<n;i++){
            if(isValid(board,row,i,n)){
                board[row][i]='Q';
                if(solve(res,row+1,n,board)){
                    return true;
                }
                board[row][i]='.';
            }
        }
        
        return false;
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        string s(n,'.');
        vector<string> board(n,s);
        // cout<<board[0][1]<<endl;
        solve(res,0,n,board);
        
        return res;
        
        
    }
};