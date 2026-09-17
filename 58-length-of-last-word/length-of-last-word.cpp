class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string>str;
        string curr="";
        for(int i=0;i<s.size();i++){
            if(s[i]!=' '){
              curr+=s[i];  
            }else{
                if(curr!=""){
                    str.push_back(curr);
                }
                curr="";
            } 
            }
           if(curr!="") str.push_back(curr);

            return str[str.size()-1].size();
    }
};