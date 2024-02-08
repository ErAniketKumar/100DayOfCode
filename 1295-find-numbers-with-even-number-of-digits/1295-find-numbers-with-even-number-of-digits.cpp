class Solution {
public:

    bool isEvenDigit(int num)
    {
        int digit=0;
        while(num>0)
        {
            num/=10;
            digit++;
        }
        return digit%2==0;
    }
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
            if(isEvenDigit(nums[i]))
            {
                count++;
            }
        }
        return count;
    }
};