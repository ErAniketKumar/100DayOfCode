class Solution {
public:

    vector<int> intersection(vector<vector<int>>& nums) {
        vector<int>res;
        unordered_map<int, int>m;

        for(int i=0;i<nums.size();i++)
        {
            vector<int>temp;
            for(int j=0;j<nums[i].size();j++)
            {
                m[nums[i][j]]++;
            }
        }

        for(auto &x: m)
        {
            if(x.second==nums.size())
            {
                res.push_back(x.first);
            }
        }
        sort(res.begin(), res.end());
        return res;
    }
};