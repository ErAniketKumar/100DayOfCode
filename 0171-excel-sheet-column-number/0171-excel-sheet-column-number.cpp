class Solution {
public:
    int titleToNumber(string columnTitle) {
        int res=0;
        for(auto ch: columnTitle)
        {
            int x=ch-'A'+1;
            res=res*26+x;
        }
        return res;
    }
};