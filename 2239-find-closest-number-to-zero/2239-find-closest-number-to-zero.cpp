class Solution {
public:
    bool checkPresent(int val, vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==val)
            return true;
        }
        return false;
    }
    bool checknegative(vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]>0) return false;
        }
        return true;
    }
    int findClosestNumber(vector<int>& nums) {
        
        if(checknegative(nums))
        {
            int mini=nums[0];
            mini=*max_element(nums.begin(), nums.end());
            return mini;
        }
        else{
            int mini=nums[0];
            for(int i=0;i<nums.size();i++)
            {
                if(abs(mini)>abs(nums[i]))
                {
                    mini=nums[i];
                }
            }
            if(mini<0)
            {
                if(checkPresent((abs(mini)),nums))
                {
                    mini=(-1)*mini;
                }
            }
            return mini;
        }
        return 0;

    }
};