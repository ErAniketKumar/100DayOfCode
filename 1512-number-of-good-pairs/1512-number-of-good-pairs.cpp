class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        unordered_map<int, int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }
        int sum=0;
        for(auto &x: m)
        {
            sum+=(x.second*(x.second-1))/2;
        }
        return sum;
    }
};