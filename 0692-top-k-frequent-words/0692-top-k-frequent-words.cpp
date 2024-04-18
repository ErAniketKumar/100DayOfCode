class Solution {
public:
   static bool comp (pair<int, string>a, pair<int, string>b)
    {
        if(a.first==b.first)
        return a.second < b.second; 
        return a.first > b.first;
    }
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int>m;
        vector<string>ans;
        for(int i=0;i<words.size();i++)
        {
            m[words[i]]++;
        }
        vector<pair<int, string>>p;
        for(auto x: m)
        {
            p.push_back({x.second, x.first});
        }
        sort(p.begin(), p.end(), comp);
        for(int i=0;i<k;i++)
        {
            ans.push_back(p[i].second);
        }
        return ans;
    }
};