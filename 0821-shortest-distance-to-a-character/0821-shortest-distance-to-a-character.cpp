class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
    vector<int>res;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]==c)
        {
            res.push_back(i);
        }
    }
    vector<int>help;
    for(int i=0;i<s.size();i++)
    {
        int minidif=INT_MAX;
        for(int j=0;j<res.size();j++)
        {
            minidif=min(minidif,(abs(i-res[j])));
        }
        help.push_back(minidif);
    }

    return help;
    }
};