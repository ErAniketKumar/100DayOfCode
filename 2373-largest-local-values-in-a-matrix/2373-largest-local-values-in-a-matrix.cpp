class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>res;
        int n=grid.size();
        for(int p=0;p<=n-3;p++)
        {
            vector<int>helper;
            for(int q=0;q<=n-3;q++)
            {
                int maxi=0;
                for(int i=p;i<p+3;i++)
                {
                    for(int j=q;j<q+3;j++)
                    {
                        maxi=max(maxi, grid[i][j]);
                    }
                }
                helper.push_back(maxi);
            }
            res.push_back(helper);
        }
        return res;
    }
};