class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int,int>mp;
        vector<int>ans;
        for(int i=0;i<numbers.size();i++){
            int el=target-numbers[i];
            if(mp.find(el)!=mp.end()){
                ans.push_back(mp[el]+1);
                ans.push_back(i+1);
                
                break;
            }else{
                mp[numbers[i]]=i;
            }
        }

        return ans;
    }
};