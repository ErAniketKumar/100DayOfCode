class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        vector<int>helper;
        vector<int>helper2;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<0)
            {
                helper.push_back(nums[i]);
            }
            else{
                helper2.push_back(nums[i]);
            }
        }
        int k=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ans[i]=helper2[k++];
            }
            else{
                ans[i]=helper[j++];
            }
        }
        return ans;

        

    }
};