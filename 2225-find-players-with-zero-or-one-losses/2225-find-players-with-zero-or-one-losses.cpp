class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
    vector<int> first;
    vector<int> second;
    for (int i = 0; i < matches.size(); i++) {
        first.push_back(matches[i][0]);
        second.push_back(matches[i][1]);
    }
    set<int>mismatch;
    unordered_map<int, int>m;
    for(int i=0;i<second.size();i++)
    {
        m[second[i]]++;
    }
    for(int i=0;i<first.size();i++)
    {
        if(m.find(first[i])==m.end())
        {
            mismatch.insert(first[i]);
        } 
    }
    set<int>los;
    for(auto &x: m)
    {
        if(x.second==1)
        {
            los.insert(x.first);
        }
    }
    vector<vector<int>>ans;
    ans.push_back(vector<int>(mismatch.begin(), mismatch.end()));
    ans.push_back(vector<int>(los.begin(), los.end()));
        return ans;
    }
};