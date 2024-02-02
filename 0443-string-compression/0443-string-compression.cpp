class Solution {
public:
    int compress(vector<char>& chars) {
        string ans="";
        int count=1;
        for(int i=0;i<chars.size()-1;i++)
        {
            if(chars[i]==chars[i+1])
            {
                count++;
            }
            else{
                if(count==1)
                {
                    ans+=string(1,chars[i]);
                }
                else{
                    ans+=string(1,chars[i]);
                    if(count!=1)
                    ans+=to_string(count);
                }
                count=1;
            }
             
        }
        ans+=string(1,chars[chars.size()-1]);
         if(count!=1)
        ans+=to_string(count);

        chars.clear();
        for(int i=0;i<ans.size();i++)
        {
            chars.push_back(ans[i]);
        }
        return ans.size();
    }
};