class Solution {
public:
    bool checkpath(vector<vector<int>> &adj, vector<int>& visited, int source, int destination)
    {
        queue<int>qu;
        qu.push(source);
        visited[source]=true;
        while(!qu.empty())
        {
            int node=qu.front();
            qu.pop();
            if(node==destination)
            return true;
            for(int ver: adj[node])
            {
                if(!visited[ver])
                {
                    visited[ver]=true;
                    qu.push(ver);
                }
            }
        }
        return false;
    }
    bool validPath(int n, vector<vector<int>>& edges, int source, int destination) {
        
        vector<vector<int>>adj(n);
        for(int i=0;i<edges.size();i++)
        {
            adj[edges[i][0]].push_back(edges[i][1]);
            adj[edges[i][1]].push_back(edges[i][0]);
        }
        vector<int>visited(n, false);
        return checkpath(adj,visited, source, destination);
    }
};