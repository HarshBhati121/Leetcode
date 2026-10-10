class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int,int>mp;

        int rank=1;
        vector<int>temp=arr;
        sort(temp.begin(),temp.end());
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(mp.find(temp[i])==mp.end()){
                mp[temp[i]]=rank;
                rank++;
            }
        }

        vector<int>ans;

        for(int i=0;i<n;i++){
            ans.push_back(mp[arr[i]]);
        }


        return ans;

    }

};