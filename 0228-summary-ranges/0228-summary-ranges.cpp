class Solution {
public:
    vector<string> summaryRanges(vector<int>& v) {
        
    vector<string>ans;
    if(v.empty()) return ans;
    vector<pair<long long, long long>>p;
    long long start=0, end=0;
    for(long long i=1;i<v.size();i++)
    {
        if (static_cast<long long>(v[i]) - static_cast<long long>(v[i - 1]) == 1) 
        {
            end++;
        }
        else{
            
            p.push_back({v[start], v[end]});
            start=end+1;
            end=start;
        }  
    }
    p.push_back({v[start], v[end]});

    for(long long i=0;i<p.size();i++)
    {
        if(p[i].first==p[i].second)
        {
            ans.push_back(to_string(p[i].first));
        }
        if(p[i].first!=p[i].second)
        {
            string word=to_string(p[i].first);
            word+="->";
            word+=to_string(p[i].second);
            ans.push_back(word);
        }
        // cout<<"["<<p[i].first<<","<<p[i].second<<"]"<<endl;
    }
    return ans;
    }
};