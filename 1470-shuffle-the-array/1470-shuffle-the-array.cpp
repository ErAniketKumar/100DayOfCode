class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans(nums.size(),0);
        int k=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ans[i]=nums[k++];
            } else {
                ans[i]=nums[n++];
            }
        }
        return ans;
    }
};