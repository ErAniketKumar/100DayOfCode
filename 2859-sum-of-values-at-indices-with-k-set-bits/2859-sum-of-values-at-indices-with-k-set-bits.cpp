class Solution {
public:
    int binarybitcount(int n)
    {
        int count=0;
        while(n>0)
        {
            if(n%2)
            count++;
            n/=2;
        }
        return count;
    }
    int sumIndicesWithKSetBits(vector<int>& nums, int k) {
        int sum=0;
        for(int i=0;i<nums.size();i++)
        {
            if(binarybitcount(i)==k)
            {
                sum+=nums[i];
            }
        }
        return sum;
    }
};