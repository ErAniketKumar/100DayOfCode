class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
    
        int ans=0;
       
        //sort each row in desinding order
        for(int i=0;i<nums.size();i++)
        {
            sort(nums[i].begin(), nums[i].end(),greater<int>());
        }
          //col wise traverse
        for(int i=0;i<nums[0].size();i++)
        {
            int maxele=0;
            for(int j=0;j<nums.size();j++)
            {
                maxele=max(maxele, nums[j][i]);
            }
            ans+=maxele;
        }

        
        return ans;
    }
};