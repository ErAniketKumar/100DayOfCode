class Solution {
public:
    bool detectCapitalUse(string word) {
        string cap=word;
        string lw=word;
        for(auto& c : lw)
        {
           c = tolower(c);
        }

        for(auto& c : cap)
        {
           c = toupper(c);
        }

        string fwc=lw;

        fwc[0]=toupper(fwc[0]);

        if(cap==word) return true;
        else if(lw==word) return true;
        else if(fwc==word) return true;
        else return false;

    }
};