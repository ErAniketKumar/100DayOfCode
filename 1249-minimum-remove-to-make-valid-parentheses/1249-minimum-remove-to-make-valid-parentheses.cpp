class Solution {
public:
    string minRemoveToMakeValid(string s) {
        vector<char>paren(s.size(),'#');
        stack<int>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='(')
            {
                st.push(i);
            }
            else if(s[i]==')' && !st.empty())
            {
                paren[st.top()]='(';
                paren[i]=')';
                st.pop();
            }
        }

        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='(' && s[i]!=')')
            {
                paren[i]=s[i];
            }
        }

        string ans="";
        for(int i=0;i<paren.size();i++)
        {
            if(paren[i]!='#')
            ans+=paren[i];
        }
      
        return ans;
    }
};