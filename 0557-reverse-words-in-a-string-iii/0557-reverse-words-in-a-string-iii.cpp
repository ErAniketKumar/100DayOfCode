class Solution {
public:
    string reverseWords(string s) {
       string ans="";
       string word="";
       s+=" ";
       for(int i=0;i<s.size();i++)
       {
           if(s[i]!=' ')
           {
               word+=s[i];
           }
           else{
               reverse(word.begin(), word.end());
               ans+=word;
               if(i!=s.size()-1)
               ans+=" ";
               word="";
           }
       }
       return ans;
    }
};