class Solution {
public:

    bool fnc(int ind,int sum,int s,vector<int>& nums,vector<vector<int>>&dp){
        
        if(ind<0) return false;
        if(sum==s/2) return true;
        
        if(dp[ind][sum]!=-1) return dp[ind][sum]==true;

        bool pick=fnc(ind-1,sum+nums[ind],s,nums,dp);
        bool notp=fnc(ind-1,sum,s,nums,dp);
        dp[ind][sum]=pick||notp;
        return dp[ind][sum]==true;
    }
    bool canPartition(vector<int>& nums) {
        int s=0;
        int n=nums.size();
       
        for(int i=0;i<nums.size();i++){
            s+=nums[i];
        }
         vector<vector<int>>dp(n,vector<int>(s,-1));
        if(s%2!=0)return false;
         return fnc(nums.size()-1,0,s,nums,dp);
    }
};