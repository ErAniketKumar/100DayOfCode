class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int, int>m;
        for(int i=0;i<nums.size();i++)
        {
            m[nums[i]]++;
        }

        sort(nums.begin(), nums.end());
        for(int i=nums.size()-1;i>=0;i--)
        {
            int x=abs(nums[i]);
            int y=-1*(nums[i]);
            if(m.find(x)!=m.end() && m.find(y)!=m.end())
            return x;
        }
        return -1;
        
    }
};