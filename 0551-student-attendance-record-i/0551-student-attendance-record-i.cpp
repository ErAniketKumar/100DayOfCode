class Solution {
public:
    bool checkRecord(string s) {
      
        if(s.size()==1) return true;
        int absent=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='A')
            {
                absent++;
            }
        }
        if(absent>1) return false;
        int lcount=0;
        for(int i=0;i<s.size()-2;i++)
        {
            if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L')
            {
                lcount++;
            }
        }
        if(lcount>0) return false;
        return true;

    }
};