class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int, int>m;
        vector<vector<int>>res;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int maxfr=0;
        for(auto &x: m)
        {
            maxfr=max(maxfr, x.second);
        }
        for(int i=0;i<maxfr;i++)
        {
           vector<int>v;
           for(auto &x: m)
           {
               if(x.second>0)
               {
                   v.push_back(x.first);
                   x.second--;
               }
           }
            res.push_back(v);
            
        }
        return res;

        
    }
};