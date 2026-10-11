class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
         int n = nums.size();

        if(n%k!=0) return false;
        
            map<int,int>mp;

            for(int i=0;i<n;i++){
                mp[nums[i]]++;
            }

            while (!mp.empty()){
                int first = mp.begin()->first;
              
                for(int i=first;i<first+k;i++){
                    if(mp.find(i)==mp.end() || mp[i]==0) return false;
                    mp[i]--;
                    if (mp[i] == 0) {
                    mp.erase(i);
                }
                }
            }
            
            return true;
      
    }
};