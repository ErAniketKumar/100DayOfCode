class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int, int>m;
        int maxfr=0;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
            maxfr=max(maxfr, m[nums[i]]);
        }
        int sum=0;
       for(auto &x: m)
       {
           if(x.second==maxfr)
           {
               sum+=x.second;
           }
       }
       return sum;
    }
};