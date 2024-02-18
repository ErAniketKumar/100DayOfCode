class Solution {
public:
    vector<string> findRestaurant(vector<string>& list1, vector<string>& list2) {
        unordered_map<string, int>m;
        for(int i=0;i<list1.size();i++)
        {
            m[list1[i]]=i;
        }
        vector<pair<int, string>>p;
        for(int j=0;j<list2.size();j++)
        {
            auto it=m.find(list2[j]);
            if(it!=m.end())
            {
                p.push_back({j+(*it).second,(*it).first});
            }
        }

        sort(p.begin(), p.end());
        vector<string>res;
        for(int i=0;i<p.size();i++)
        {
            if(p[0].first==p[i].first)
            {
                res.push_back(p[i].second);
            }
        }
        return res;

    }
};