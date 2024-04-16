class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        nums.erase(remove(nums.begin(), nums.end(),0),nums.end());
        
        int op=0;
        while(nums.size()>0)
        {   op++;
            int ele=nums[0];
            for(int i=0;i<nums.size();i++)
            {
                nums[i]-=ele;
            }
            nums.erase(remove(nums.begin(), nums.end(),0),nums.end());
        }
        return op;
    }
};