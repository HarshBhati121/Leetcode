class Solution {
public:

    int fnc(int row, int col,int m,int n,vector<vector<int>>& dp){
        if(row==m-1 && col==n-1) return 1;
        if(row==m || col==n) return 0; 
        if(dp[row][col]!=-1) return dp[row][col];
        int l=fnc(row+1,col,m,n,dp);
        int r=fnc(row,col+1,m,n,dp);

        return dp[row][col]=l+r;

    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return fnc(0,0,m,n,dp);
    }
};