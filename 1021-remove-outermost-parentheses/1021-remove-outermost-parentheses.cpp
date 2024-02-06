class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char>st;
        vector<char>v;
        string word="";
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='('){
            st.push(s[i]);
            word+=s[i];
            }
            else if(s[i]==')')
            {
                word+=s[i];
                st.pop();  
            }
            if(st.empty())
            {
                word+=" ";
            }
        }
        word+=" ";
        for(int i=1;i<word.size();i++)
        {
            if(word[i]!=' ')
            {
                v.push_back(word[i]);
            }
            else{
                i++;
                v.pop_back();
            }
        }

        word="";
        for(int i=0;i<v.size();i++)
        {
            word+=v[i];
        }
        return word;
        
    }
};