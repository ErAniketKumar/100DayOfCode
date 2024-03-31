class Solution {
public:
    void dfs(int source, int n, vector<bool>&visited,vector<vector<int>>& isConnected)
    {
        visited[source]=true;
        vector<int>adj;
        for(int i=0;i<n;i++)
        {
            int x=isConnected[source][i];
            if(x==1)
            {
                adj.push_back(i);
            }
        }

        for(auto i:adj)
        {
            if(!visited[i])
            {
                dfs(i,n,visited, isConnected);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n=isConnected.size();
        int count=0;
        vector<bool>visited(n, false);
        for(int i=0;i<n;i++)
        {
            if(!visited[i])
            {
                count++;
                dfs(i,n,visited, isConnected);
            }
        }
        return count;
    }
};