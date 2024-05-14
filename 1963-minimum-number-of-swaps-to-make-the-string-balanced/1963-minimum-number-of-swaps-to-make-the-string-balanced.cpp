class Solution {
public:
    int minSwaps(string s) {
        int swapCount=0;
        stack<char>st;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='[')
            {
                st.push(s[i]);
            } else if(s[i]==']') {
                if(!st.empty() && st.top()=='[')
                {
                    st.pop();
                } else if(st.size()==0) {
                    swapCount++;
                    st.push('[');
                }
            }
        }
        return swapCount;
    }
};