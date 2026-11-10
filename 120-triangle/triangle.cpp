class Solution {
public:

    int fnc(int i,int j,vector<vector<int>>& triangle,vector<vector<int>>&dp){
        if(i==triangle.size()-1)  return triangle[i][j];
        if(dp[i][j]!=1000) return dp[i][j];
        int d=triangle[i][j]+fnc(i+1,j,triangle,dp);
        int dr=triangle[i][j]+fnc(i+1,j+1,triangle,dp);

        return dp[i][j]=min(d,dr);
       
    }
    int minimumTotal(vector<vector<int>>& triangle) {
        int n=triangle.size();
        vector<vector<int>>dp(n,vector<int>(n,1000));
        return fnc(0,0,triangle,dp);
    }
};