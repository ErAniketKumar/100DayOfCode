class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
       vector<int>ans(nums.size(),0);
        vector<int>oddidx;
        vector<int>evenidx;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                evenidx.push_back(nums[i]);
            }
            else{
                oddidx.push_back(nums[i]);
            }
        }
        sort(oddidx.begin(), oddidx.end(), greater<int>());
        sort(evenidx.begin(),evenidx.end());
        int k=0;
        int j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(i%2==0)
            {
                ans[i]=evenidx[k++];
            }
            else{
                ans[i]=oddidx[j++];
            }
        }
        return ans;
    }
};