class Solution {
public:
    int greaterEle(vector<int>& v, int start, int target)
    {
        int n = v.size();
        for(int i = 0; i < n; i++)
        {
            int index = (start + i) % n;
            if(v[index] > target)
                return v[index];
        }
        return -1;
    }

    vector<int> nextGreaterElements(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n);
        for(int i = 0; i < n; i++)
        {
            res[i] = greaterEle(nums, i + 1, nums[i]);
        }
        return res;
    }
};