class Solution {
public:
    int longestPalindrome(string s) {
        unordered_map<char, int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        int onefr=0, oddfr=0;
        for(auto &x: m)
        {
            if(x.second==1)
            {
                onefr++;
            }
            if(x.second%2!=0 && x.second!=1)
            {
                oddfr++;
            }
        }
        if(oddfr==0 && onefr==0) return s.size();
        int tsize=s.size()+1-onefr;
        tsize-=oddfr;
        return tsize;
    }
};