class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        map<int, vector<int>>m;
        for(int i=0;i<mat.size();i++)
        {
            for(int j=0;j<mat[i].size();j++)
            {
                m[i+j].push_back(mat[i][j]);
            }
        }
        vector<int>ans;
        vector<int>temp;
        int i=0;
        for(auto x: m)
        {
            temp=x.second;
            if(x.first%2!=0)
            {
                ans.insert(ans.end(),temp.begin(), temp.end());
            }
            else{
                reverse(temp.begin(), temp.end());
                ans.insert(ans.end(), temp.begin(), temp.end());
            }
            
        }
        return ans;
    }
};