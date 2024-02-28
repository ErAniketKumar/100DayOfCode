class Solution {
public:
    string decodeString(string s, vector<string>&dotarr,vector<char>&abcarr, unordered_map<char,int>&m)
    {
        string ws="";
        for(int i=0;i<s.size();i++)
        {
            auto it=m.find(s[i]);
            if(it!=m.end())
            {
                ws+=dotarr[(*it).second];
            }
        }
        return ws;
    }

    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>s{".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        vector<char>s2{'a','b','c', 'd','e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
        unordered_map<char, int>m;
        for(int i=0;i<s2.size();i++)
        {
            m[s2[i]]=i;
        }
        set<string>ans;
        for(int i=0;i<words.size();i++)
        {
            ans.insert(decodeString(words[i],s,s2, m));
        }
        return ans.size();
        
    }
};