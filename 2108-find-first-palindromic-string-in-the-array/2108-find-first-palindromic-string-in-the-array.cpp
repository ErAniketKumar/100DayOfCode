class Solution {
public:
    bool CheckPalindrome(string word)
    {
        int s=0;
        int e=word.size()-1;
        while(s<e)
        {
            if(word[s]!=word[e])
            {
               return false; 
            }
            s++;e--;
        }
        return true;
    }
    string firstPalindrome(vector<string>& words) {
        for(int i=0;i<words.size();i++)
        {
            if(CheckPalindrome(words[i]))
            return words[i];
        }
        return "";
    }
};