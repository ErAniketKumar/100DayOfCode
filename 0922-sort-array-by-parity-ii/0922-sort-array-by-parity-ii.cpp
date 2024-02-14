class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
         vector<int>ans(nums.size(),0);
        vector<int>odd;
        vector<int>even;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]%2!=0)
            {
                odd.push_back(nums[i]);
            }
            else{
                even.push_back(nums[i]);
            }
        }
        int k=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ans[i]=even[k++];
            }
            else{
                ans[i]=odd[j++];
            }
        }
        return ans;
    }
};