class Solution {
public:
    int helper(vector<int> &nums, int k)
    {
        unordered_map<int, int>m;
        int i=0, j=0, n=nums.size();
        int count=0;
        while(j<n)
        {
            m[nums[j]]++;
            while(m.size()> k)
            {
                m[nums[i]]--;
                if(m[nums[i]]==0)
                    m.erase(nums[i]);
                i++;
            }
            j++;
            count+=(j-i)+1;
        }
        return count;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
        return helper(nums, k)- helper(nums, k-1);
    }
};