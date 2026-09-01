class Solution {
public:
    string minWindow(string s, string t) {
        
         map<char,int>mp;
         int start=0;

         int ml=INT_MAX;

         int l=0;
         int r=0;

        int req=t.size();

        for(int i=0;i<t.size();i++){
            mp[t[i]]++;
        }

         for( r;r<s.size();r++){

            if(mp[s[r]]>0){
                req--;
            }
            mp[s[r]]--;


            while(req==0){

                if(r-l+1<ml){
                    ml=r-l+1;
                    start=l;
                }
                mp[s[l]]++;
                if(mp[s[l]]>0){
                    req++;
                }

                l++;
            }
         }

         if(ml==INT_MAX) return "";
         return s.substr(start,ml);
    }
};