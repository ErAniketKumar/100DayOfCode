
class Node
{
public:
    int sum, data, row;
    Node()
    {
    }
    Node(int sum, int data, int row)
    {
        this->sum = sum;
        this->data = data;
        this->row = row;
    }
};

class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& nums) {
    vector<Node> helper;
    map<int, vector<int>> m;
    for (int i = 0; i < nums.size(); i++)
    {
        for (int j = 0; j < nums[i].size(); j++)
        {
            Node nd(i + j, nums[i][j], i);
            helper.push_back(nd);
        }
    }

  

    for (auto nd : helper)
    {
        m[nd.sum].push_back(nd.data);
       
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