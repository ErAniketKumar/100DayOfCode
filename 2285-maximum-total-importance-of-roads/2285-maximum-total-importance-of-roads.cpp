class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        vector<vector<int>>graph(n);
        for(auto& edg:roads)
        {
            graph[edg[0]].push_back(edg[1]);
            graph[edg[1]].push_back(edg[0]);
        }
        vector<pair<int, int>>p;
        for(int i=0;i<n;i++)
        {
            p.push_back({graph[i].size(),i});
        }
        sort(p.begin(), p.end());
        
        unordered_map<int, int> m;
        for(int i = 0; i < n; i++) {
            m[p[i].second] = i + 1; 
        }

       
       long long sum = 0;
        for(auto edg:roads)
        {
            int val1=m[edg[0]];
            int val2=m[edg[1]];
            sum+=val1+val2;
        }
        return sum;

    }
};