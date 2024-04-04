#include<bits/stdc++.h>
class Solution {
public:
    int maxDepth(string s) {
        stack<char>st;
        int maxSize=0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            st.push('(');
            if(s[i]==')' && st.size()>0)
            {
                int stSize=st.size();
                maxSize=max(maxSize, stSize);
                st.pop();
            }
        }
        return maxSize;
    }
};