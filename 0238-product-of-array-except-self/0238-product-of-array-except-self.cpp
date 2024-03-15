class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int p=1;
        int count=0;
        int idx=0;
        for(int i=0;i<nums.size();i++)
        {
            
            if(nums[i]==0)
            {
                count++;
                idx=i;
            }
            else p*=nums[i];
        }
        if(count==0)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=p/nums[i];
            }
        }
        else if(count==1)
        {
            for(int  i=0;i<nums.size();i++)
            {
                nums[i]=0;
            }
            nums[idx]=p;
        }
        if(count>1)
        {
            for(int i=0;i<nums.size();i++)
            {
                nums[i]=0;
            }
        }

         return nums;
        
    }
};