class Solution {
public:
    void dfs(vector<vector<int>>& graph, vector<vector<int>> &ans, int src,vector<int>path)
    {
        
        path.push_back(src);
        if(src==graph.size()-1) ans.push_back(path);
        else{
            for(auto ver:graph[src])
            {
                dfs(graph, ans, ver,path);
            }
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        vector<vector<int>>ans;
        vector<int>path;
        dfs(graph, ans,0,path);
        return ans;
    }
};