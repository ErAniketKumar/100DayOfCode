class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int>m;
        for(int i=0;i<s.size();i++)
        {
            m[s[i]]++;
        }
        vector<pair<int, char>>p;
        for(auto &x: m)
        {
            p.push_back({x.second, x.first});
        }

        sort(p.begin(), p.end());
        string word="";
        
        for(int i=0;i<p.size();i++)
        {
            int frq=p[i].first;
            while(frq--)
            word+=p[i].second;
        }

        reverse(word.begin(), word.end());
        return word;
    }
};