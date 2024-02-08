class Solution {
public:
    char value(int num)
    {
        vector<char>v={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o',
        'p','q','r','s','t','u','v','w','x','y','z'};
        return v[num-1];
    }
    string freqAlphabets(string s) {
        stack<char>st;
        string word="";
        for(int i=0;i<s.size();i++)
        {
            st.push(s[i]);
        }
        while(!st.empty())
        {
            if(st.top()=='#')
            {
                st.pop();
                char ch2=st.top();
                st.pop();
                char ch1=st.top();
                st.pop();
                string w="";
                w+=ch1;
                w+=ch2;
                word+=value(stoi(w));
                w="";
            }
            else{
                char ch=st.top();
                st.pop();
                word+=value(int(ch - '0'));
            }
        }
        reverse(word.begin(), word.end());
        return word;
    }
};