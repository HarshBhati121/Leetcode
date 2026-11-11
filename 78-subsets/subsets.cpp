class Solution {
public:
    void fnc(int ind,vector<int>&ds,vector<int> nums,vector<vector<int>>&ans){
        if(ind==nums.size()){
          ans.push_back(ds);   
          return;
        }  
        ds.push_back(nums[ind]);
        fnc(ind+1,ds,nums,ans);
        ds.pop_back();
        fnc(ind+1,ds,nums,ans);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int>ds;
        vector<vector<int>>ans;
         fnc(0,ds,nums,ans);
         return ans;

    }
};