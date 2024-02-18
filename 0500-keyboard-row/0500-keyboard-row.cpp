class Solution {
public:
    bool checkWord(string word, unordered_map<char,int>&m1, unordered_map<char,int>&m2, unordered_map<char,int>&m3)
    {
        for(auto &x:word)
        {
            x=tolower(x);
        }
        int row1=0, row2=0, row3=0;
        for(int i=0;i<word.size();i++)
        {
            if(m1.find(word[i])!=m2.end())
            {
                row1++;
            }
        }

        for(int i=0;i<word.size();i++)
        {
            if(m2.find(word[i])!=m2.end())
            {
                row2++;
            }
        }

        for(int i=0;i<word.size();i++)
        {
            if(m3.find(word[i])!=m3.end())
            {
                row3++;
            }
        }

        int wsize=word.size();

        if(row1==wsize || row2==wsize || row3==wsize)
        {
            return true;
        }
        else return false;
    }
    vector<string> findWords(vector<string>& words) {
        
        string row1="qwertyuiop";
        string row2="asdfghjkl";
        string row3="zxcvbnm";

        unordered_map<char,int>m1;
        unordered_map<char,int>m2;
        unordered_map<char,int>m3;
        for(int i=0;i<row1.size();i++)
        {
            m1[row1[i]]++;
        }
        for(int i=0;i<row2.size();i++)
        {
            m2[row2[i]]++;
        }
        for(int i=0;i<row3.size();i++)
        {
            m3[row3[i]]++;
        }

        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            if(checkWord(words[i], m1,m2,m3))
            {
                ans.push_back(words[i]);
            }
        }
        return ans;
    }
};