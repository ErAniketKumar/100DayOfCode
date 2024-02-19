class Solution {
public:
    int secondHighest(string s) {
        vector<int>v;
        for(int i=0;i<s.size();i++)
        {
            if(isdigit(s[i]))
            {
                v.push_back(s[i]-'0');
            }
        }
        if(v.size()==1 || v.empty()) return -1;
        int maxi=*max_element(v.begin(), v.end());
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==maxi)
            {
                v[i]=-1;
            }
        }

        maxi=*max_element(v.begin(), v.end());
        return maxi;

    }
};