class Solution {
public:

    bool solve(string& s, string& p, int i, int j,
               vector<vector<int>>& dp) {

        if (j == p.length()) {
            return i == s.length();
        }

       
        if (dp[i][j] != -1) {
            return dp[i][j];
        }

        
        bool match = (i < s.length() &&
                     (s[i] == p[j] || p[j] == '.'));

       
        if (j + 1 < p.length() && p[j + 1] == '*') {

           
            bool skip = solve(s, p, i, j + 2, dp);

            
            bool use = match && solve(s, p, i + 1, j, dp);

            return dp[i][j] = skip || use;
        }

       
        return dp[i][j] =
            match && solve(s, p, i + 1, j + 1, dp);
    }

    bool isMatch(string s, string p) {

        int n = s.length();
        int m = p.length();

       
        vector<vector<int>> dp(n + 1,
                               vector<int>(m + 1, -1));

        return solve(s, p, 0, 0, dp);
    }
};