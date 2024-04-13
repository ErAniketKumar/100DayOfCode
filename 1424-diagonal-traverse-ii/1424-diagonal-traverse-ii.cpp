
class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
    map<int, vector<int>> m;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            m[i+j].push_back(nums[i][j]);
        }
    }
    vector<int> ans;
    for (auto x : m)
    {
        reverse(x.second.begin(), x.second.end());
        ans.insert(ans.end(), x.second.begin(), x.second.end());
    }
        return ans;
    }
};