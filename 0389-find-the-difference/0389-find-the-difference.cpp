class Solution {
public:
    char findTheDifference(string s, string t) {
       int sum=0;
       int sum2=0;
       for(int i=0;i<s.size();i++)
       {
           sum+=s[i];
       }
       for(int i=0;i<t.size();i++)
       {
           sum2+=t[i];
       }
       return sum2-sum;
        
    }
};