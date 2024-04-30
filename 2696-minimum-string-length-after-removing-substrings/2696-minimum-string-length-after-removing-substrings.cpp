class Solution {
public:
    int minLength(string s) {
        stack<char>st;
        int i=0;
        for(int i=0;i<s.size();i++)
        {
            if(st.empty())
            {
                st.push(s[i]);
            } else {
                if(!st.empty() && s[i]=='B' && st.top()=='A')
                st.pop();
                else if(!st.empty() && s[i]=='D' && st.top()=='C')
                st.pop();
                else st.push(s[i]);
            }
        }
        return st.size();
    }
};