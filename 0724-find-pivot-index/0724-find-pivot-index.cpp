class Solution {
public:
    int pivotIndex(vector<int>& nums) {
    int lsum=0;
    int tsum=0;
    for(int i=0;i<nums.size();i++)
    {
        tsum+=nums[i];
    }

    for(int i=0;i<nums.size();i++)
    {
        lsum+=nums[i];
        if(tsum-lsum==0)
        return i;
        else{
            tsum-=nums[i];
        }
    }  
     return -1;    
   }
};