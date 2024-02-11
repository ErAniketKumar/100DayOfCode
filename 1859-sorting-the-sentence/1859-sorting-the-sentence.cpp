class Solution {
public:
    string sortSentence(string s) {
    reverse(s.begin(), s.end());
    s+=" ";
    vector<pair<int, string>>p;
    string word="";
    for(int i=0;i<s.size();i++)
    {
        if(s[i]!=' ')
        {
            word+=s[i];
        }
        else{
            int d=word[0]-'0';
            word.erase(word.begin());
            reverse(word.begin(), word.end());
            word+=" ";
            p.push_back({d,word});
            word="";
        }
    }
    sort(p.begin(), p.end());
    string ans="";
    for(int i=0;i<p.size();i++)
    {
        ans+=p[i].second;
    }
    ans.erase(ans.end()-1);
    return ans;
    }
};