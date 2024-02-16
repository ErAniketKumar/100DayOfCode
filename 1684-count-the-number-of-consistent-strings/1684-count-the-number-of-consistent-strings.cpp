class Solution {
public:
    bool checkFound(string s, string check)
    {
        unordered_map<char, int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        for(int i=0;i<check.size();i++)
        {
            if(m.find(check[i])==m.end())
            return false;
        }

        return true;
    }
    int countConsistentStrings(string allowed, vector<string>& words) {
        int count=0;
        for(int i=0;i<words.size();i++)
        {
            if(checkFound(allowed, words[i]))
            {
                count++;
            }
        }
        return count;
    }
};