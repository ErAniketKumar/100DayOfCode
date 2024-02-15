class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int>m;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2==0)
            {
                m[nums[i]]++;
            }
        }
        int maxfr=0;
        for(auto &x: m)
        {
            maxfr=max(maxfr, x.second);
        }
        int ele=INT_MAX;
        for(auto &x: m)
        {
            if(maxfr==x.second)
            {
                ele=min(ele,x.first);
            }
        }
        if(ele==INT_MAX) return -1;
        return ele;
    }
};