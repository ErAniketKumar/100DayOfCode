#include <stack>
#include <string>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> st;
        if(num.size()<=k)
        return "0";
        for (int i=0;i<num.size();i++) {
            while (!st.empty() && k > 0 && st.top() > num[i]) {
                st.pop();
                k--;
            }
            st.push(num[i]);
        }
        while (k > 0 && !st.empty()) {
            st.pop();
            k--;
        }

        string ans = "";
        while (!st.empty()) {
            ans += st.top();
            st.pop();
        }
        
        reverse(ans.begin(), ans.end());
        //remove leading i.e begin of all zero 
        while(ans[0]=='0')
        {
            ans.erase(ans.begin());
        }
        if(ans=="") //nullstring then ans will zero
        ans="0";
        return ans;
    }
};
