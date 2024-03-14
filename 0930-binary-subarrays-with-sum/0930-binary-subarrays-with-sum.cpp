class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int n=nums.size();
        int count=0;
        int sum=0;
        unordered_map<int, int>m;
        m[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            count+=m[sum-goal];
            m[sum]++;
        }
        return count;
    }
};