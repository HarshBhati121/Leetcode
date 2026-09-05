class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>v1;
        vector<int>v2;
        int maxi=nums[0];
        for(int i=0;i<nums.size();i++){
            
            maxi=max(maxi,nums[i]);
            v1.push_back(maxi);
        }
        int mini=nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--){
            
            mini=min(mini,nums[i]);
            v2.push_back(mini);
        }
        reverse(v2.begin(),v2.end());

        for(int i=0;i<nums.size();i++){
            int diff=v1[i]-v2[i];
            if(diff<=k) return i;
        }
        return -1;
    }
};