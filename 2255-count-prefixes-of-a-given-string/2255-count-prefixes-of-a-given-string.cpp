class Solution {
public:
    int countPrefixes(vector<string>& words, string s) {
        vector<string>pre;
        string w="";
        for(int i=0;i<s.size();i++)
        {
            w+=s[i];
            pre.push_back(w);
        }

        unordered_map<string, int>m;
        for(int i=0;i<pre.size();i++)
        {
            m[pre[i]]++;
        }

        int count=0;
        for(int i=0;i<words.size();i++)
        {
            if(m.find(words[i])!=m.end())
            {
                count++;
            }
        }

        return count;


    }
};