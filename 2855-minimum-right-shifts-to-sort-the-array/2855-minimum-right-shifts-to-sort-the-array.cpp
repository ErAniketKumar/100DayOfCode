class Solution {
public:
    bool isSortedArr(vector<int>nums)
    {
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>=nums[i-1])
            {

            }
            else return false;
        }
        return true;
    }
    int minimumRightShifts(vector<int>& nums) {
        
       for(int i=0;i<nums.size();i++)
       {
           if(isSortedArr(nums))
           {
               return i;
           }
           int lele=nums.back();
           nums.pop_back();
           nums.insert(nums.begin(),lele);
       }
        return -1;
    }
};