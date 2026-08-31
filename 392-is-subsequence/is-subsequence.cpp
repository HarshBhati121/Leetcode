class Solution {
public:
    bool isSubsequence(string s, string t) {
        int l=0;
        int r=0;

        int flag=0;

        if(s.empty())return true;

        while(l<s.size() && r<t.size()){
            
            
                if(s[l]==t[r]){
                    l++;
                    r++;
                
                }
                else{
                    r++;
                }
            
            
            
        }

       return l==s.size();
    }
};