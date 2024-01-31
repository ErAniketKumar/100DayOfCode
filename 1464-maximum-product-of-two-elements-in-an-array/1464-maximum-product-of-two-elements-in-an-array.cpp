class Solution {
public:
    int maxProduct(vector<int>& nums) {
       
            // int max1=0;
        auto max1 = *std::max_element(nums.begin(), nums.end());
            // for(int i=0;i<nums.size();i++)
            // {
            //     max1=max(max1, nums[i]);
            // }
            for(int i=0;i<nums.size();i++)
            {
                if(nums[i]==max1)
                {
                    nums[i]=-1;
                    break;
                }
            }
       auto max2 = *std::max_element(nums.begin(), nums.end());
        
        return (max1-1)*(max2-1);
        // return (nums[nums.size()-1]-1)*(nums[nums.size()-2]-1);
        
    }
};