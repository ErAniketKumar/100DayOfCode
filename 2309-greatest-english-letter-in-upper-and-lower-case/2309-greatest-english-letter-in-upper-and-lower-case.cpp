class Solution {
public:
    string greatestLetter(string s) {
      
        unordered_map<char, int>m2;
        for(int i=0;i<s.size();i++)
        {
            m2[s[i]]++;
        }
        string ans="";
        char ch;
        for(int i=0;i<s.size();i++)
        {
            if(97<=s[i] && s[i]<=122)
            {
                ch=toupper(s[i]);
            }
            else{
                ch=tolower(s[i]);
            }
            auto it1=m2.find(s[i]);
            auto it2=m2.find(ch);
            if(it1!=m2.end() && it2!=m2.end())
            {
                ans+=toupper(ch);
            }
        }
         if(ans!="")
            {
                sort(ans.begin(), ans.end());
                string res="";
                res+=ans[ans.size()-1];
                return res;
            }
         return ans;
    }
};