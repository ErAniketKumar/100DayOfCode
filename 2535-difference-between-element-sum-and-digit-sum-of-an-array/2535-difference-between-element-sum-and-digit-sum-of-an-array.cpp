class Solution {
public:

    int splitdegit(int num)
    {
        int sum=0;
        while(num>0)
        {
            sum+=num%10;
            num/=10;
        }
        return sum;
    }
    int differenceOfSum(vector<int>& nums) {
        
        int arrsum=0;
        for(int i=0;i<nums.size();i++)
        {
            arrsum+=nums[i];
        }
        vector<int>v;
       for(int i=0;i<nums.size();i++)
       {
            v.push_back(splitdegit(nums[i]));
       }

        int dsum=0;
       for(int i=0;i<v.size();i++)
       {
           dsum+=v[i];
       }

       return abs(arrsum-dsum);

    }
};