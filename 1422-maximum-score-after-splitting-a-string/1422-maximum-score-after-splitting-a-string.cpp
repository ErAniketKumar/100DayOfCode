class Solution {
public:
    int getMaxi(vector<int>&v,int lsize)
    {
        int rone=0,lzero=0;
        for(int i=0;i<lsize;i++)
        {
            if(v[i]==0)
            lzero++;
        }
        for(int i=lsize;i<v.size();i++)
        {
            if(v[i]==1)
            rone++;
        } 
        return rone+lzero;
    }
    int maxScore(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            v.push_back(s[i]-'0');
        }
        int maxi=0;
        for(int i=0;i<v.size()-1;i++)
        {
            maxi=max(maxi,getMaxi(v,i+1));
        }
        return maxi;
    }
};