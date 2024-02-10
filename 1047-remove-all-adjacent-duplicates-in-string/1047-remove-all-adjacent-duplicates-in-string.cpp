class Solution {
public:

    string removeDuplicates(string s) {
        stack<char>st;
     if (!s.empty())
        st.push(s[0]);
    for(int i=1;i<s.size();i++)
    {
        if( !st.empty() && s[i]==st.top())
        st.pop();
        else st.push(s[i]);
    }
    string word="";
    while(!st.empty())
    {
        word+=st.top();
        st.pop();
    }
    reverse(word.begin(), word.end());
    return word;
    }
};