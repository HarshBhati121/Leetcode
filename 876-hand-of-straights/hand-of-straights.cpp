class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        int n = hand.size();

        if(n%groupSize!=0) return false;
        else {
            map<int,int>mp;

            for(int i=0;i<n;i++){
                mp[hand[i]]++;
            }

            priority_queue<int, vector<int>, greater<int>> pq;

            for(auto it: mp){
                pq.push(it.first);
            }


            while(!pq.empty()){

                int first =pq.top();

                for(int i=first;i<first+groupSize;i++){

                    if(mp.find(i)==mp.end() || mp[i]==0) return false;
                    mp[i]--;

                    if(mp[i]==0){
                        if(i!=pq.top())return false;
                        pq.pop();
                    }
                }    
            }


            return true;

        



        }
        
    }
};