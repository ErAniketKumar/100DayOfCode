class Solution {
public:
    int findChampion(vector<vector<int>>& grid) {
        vector<pair<int, int>>p;
        for(int i=0;i<grid.size();i++)
        {   
            int count=0;
            for(int j=0;j<grid[0].size();j++)
            {
                if(grid[i][j]==1)
                {
                    count++;
                }
            }
             p.push_back({count, i});
            count=0;
        }
        sort(p.begin(), p.end());
        return p[p.size()-1].second;
    }
};