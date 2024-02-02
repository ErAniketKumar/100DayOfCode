class Solution {
public:
    int countElements(vector<int>& nums) {
        int mini=*min_element(nums.begin(), nums.end());
        int maxi=*max_element(nums.begin(), nums.end());
        int minicount=0;
        int maxicount=0;
        if(nums.size()==1 ||nums.size()==2||mini==maxi) return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==mini)
            {
                minicount++;
            }
            if(nums[i]==maxi)
            {
                maxicount++;
            }
        }
        return nums.size()-(minicount+maxicount);

    }
};