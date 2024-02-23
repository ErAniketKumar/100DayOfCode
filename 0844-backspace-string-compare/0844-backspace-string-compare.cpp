class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        stack<char>st2;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]!='#')
            {
                st.push(s[i]);
            }
            else{
                if(!st.empty())
                {
                    st.pop();
                }
            }
        }

         for(int i=0;i<t.size();i++)
        {
            if(t[i]!='#')
            {
                st2.push(t[i]);
            }
            else{
                if(!st2.empty())
                {
                    st2.pop();
                }
            }
        }

        string word1="";
        while(!st.empty())
        {
            word1+=st.top();
            st.pop();
        }

        string word2="";
        while(!st2.empty())
        {
            word2+=st2.top();
            st2.pop();
        }

        return word1==word2;


    }
};