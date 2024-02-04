class Solution {
public:
    string defangIPaddr(string address) {
        string ans="";
        for(int i=0;i<address.size();i++)
        {
            string word="";
            if(address[i]=='.')
            {
                word="[.]";
            }
            ans+=word;
            if(address[i]=='.') continue;
            ans+=string(1,address[i]);
        }
        return ans;
    }
};