class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
      map<int,int>mp;

      for(int i=0;i<nums.size();i++){
        if(mp.find(nums[i])==mp.end()){
            mp[nums[i]]=1;
        }else mp[nums[i]]++;
      }
       priority_queue<int, vector<int>, greater<int>> pq;


       for(auto it:mp){
        pq.push(it.second);
        if(pq.size()>k){
            pq.pop();
        }
        
       }

       vector<int>v;

       while(!pq.empty()){
        v.push_back(pq.top());
        pq.pop();
       }
       vector<int>ans;
    

    for(auto it : mp){
        int i=0;
        while(i<v.size()){
            if(it.second==v[i]){
                ans.push_back(it.first);
            }

            i++;  
        }
    }
    set<int>st;
    for(auto num:ans){
        st.insert(num);
    }
    vector<int>ansR;
    for(auto it:st){
        ansR.push_back(it);
    }
    return ansR;
    }
};