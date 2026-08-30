class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int,int>mp;
        int ans=0;

        for(int i=0;i<nums.size();i++){

            if(mp.find(nums[i])!=mp.end()){
                if(nums[i]==nums[i-1] && mp[nums[i]]!=0){
                    mp[nums[i]]=1;
                }else{
                    mp[nums[i]]=0;
                }
            }
            else{
                mp[nums[i]]=1;
            }
        }

        for(auto it:mp){
            if(it.second>0)ans++;
        }

        return ans;
    }
};