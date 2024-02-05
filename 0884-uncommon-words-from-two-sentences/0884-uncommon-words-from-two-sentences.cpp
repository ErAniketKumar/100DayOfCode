class Solution {
public:
    vector<string> uncommonFromSentences(string s1, string s2) {

        s1+=" ";
        s2+=" ";
        s1+=s2;
        vector<string>v;
        string word="";
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]!=' ')
            {
                word+=s1[i];
            }
            else{
                v.push_back(word);
                word="";
            }
        }
        unordered_map<string, int>m;
        for(int i=0;i<v.size();i++)
        {
            m[v[i]]++;
        }
        v.clear();
        for(auto &x: m)
        {
            if(x.second==1)
            {
                v.push_back(x.first);
            }
        }
        return v;

    }
};