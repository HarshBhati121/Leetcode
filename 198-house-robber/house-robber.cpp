
class Solution {
public:
    int fnc(int index,vector<int>nums,vector<int>&dp){
        if(index>=nums.size())return 0;
        
        //pick
        if(dp[index]!=-1) return dp[index];
        // money+=nums[index];
        int m1=nums[index]+fnc(index+2,nums,dp);

        
        //dont pick

        // money-=nums[index];
        int m2=fnc(index+1,nums,dp);


        return dp[index]=max(m1,m2);
    }
    int rob(vector<int>& nums) {
        vector<int>dp(nums.size(),-1);
        return fnc(0,nums,dp);
    }
};

