class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        
        map<int, vector<int>>graph;
        for(auto edg:edges)
        {
            graph[edg[0]].push_back(edg[1]);
            // graph[edg[1]].push_back(edg[0]);
        }
        vector<int>vertex;
        set<int>listvertex;
        for(auto &x: graph)
        {
            vertex.push_back(x.first);
            for(auto y: x.second)
            {
                listvertex.insert(y);
            }
        }

        unordered_map<int, int>m;
        
        vector<int>ans;
        for(auto x:listvertex)
        {
            m[x]++;
        }
        for(int i=0;i<vertex.size();i++)
        {
            if(m.find(vertex[i])==m.end())
            {
                ans.push_back(vertex[i]);
            }
        }
        return ans;
    }
};