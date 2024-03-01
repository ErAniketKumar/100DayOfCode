class Solution {
public:
    bool checkWordformed(string word, string chars)
    {
        unordered_map<char,int>m;
        for(int i=0;i<chars.size();i++)
        {
            m[chars[i]]++;
        }

        string newword="";
        for(int i=0;i<word.size();i++)
        {
            auto it=m.find(word[i]);
            if(it!=m.end() && (*it).second>0)
            {
                newword+=(*it).first;
                ((*it).second)--;
            }
        }

        return newword.size()==word.size();
    }
    int countCharacters(vector<string>& words, string chars) {
        

        int count=0;
        string ans="";
        for(int i=0;i<words.size();i++)
        {
            if(checkWordformed(words[i], chars))
            {
                ans+=words[i];
            }
        }
        return ans.size();
    }
};