class Solution {
public:
    string capitalizeTitle(string title) {
        title+=" ";
        string word="";
        string ans="";
        for(int i=0;i<title.size();i++)
        {
            if(title[i]!=' ')
            {
                word+=title[i];
            }
            else{

                for(auto &x: word)
                {
                    x=tolower(x);
                }
                if(word.size()>2)
                {
                   word[0]=word[0]-32;
                }
                ans+=word;
                ans+=" ";
                word="";
            }

        }

        ans.erase(ans.end()-1);

        return ans;

        // for(auto &x: title)
        // {
        //     x=tolower(x);
        // }

       
        // for(int i=0;i<title.size();i++)
        // {
        //     if(title[i]==' ')
        //     {
        //         title[i+1]-=32;
        //     }
        // }
        // return title;
        
        
    }
};