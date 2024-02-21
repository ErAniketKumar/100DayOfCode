class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int nc=0;
        int res=0;
        int n=nums.size();
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                nc++;
            }
        }
        sort(nums.begin(), nums.end());
        if(nc==n)
        {
            return nums[n-1]*nums[n-2]*nums[n-3];
        }
        if(nc>=2)
        {
            nums[0]=abs(nums[0]);
            nums[1]=abs(nums[1]);
            res=nums[0]*nums[1]*nums[n-1];
        }
        res=max(res,(nums[n-1]*nums[n-2]*nums[n-3]));
        return res;
    }
};