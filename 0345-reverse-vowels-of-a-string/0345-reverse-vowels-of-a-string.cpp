class Solution {
public:
    bool isVowel(char ch)
    {
        ch=tolower(ch);
        if(ch=='a'|| ch=='e' || ch=='i'||ch=='o'|| ch=='u')
        {
            return true;
        }
        return false;
    }
 
    string reverseVowels(string s) {
        string v="";
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                v+=s[i];
            }
        }
        int k=v.size()-1;
        for(int i=0;i<s.size();i++)
        {
            if(isVowel(s[i]))
            {
                s[i]=v[k--];
            }
            
        }
        return s;

    }
};