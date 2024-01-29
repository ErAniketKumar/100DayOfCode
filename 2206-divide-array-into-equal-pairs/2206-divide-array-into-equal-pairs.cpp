class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int size=nums.size();
        if(size%2==0)
        {
            unordered_map<int, int>m;
            for(int i=0;i<nums.size();i++)
            {
                m[nums[i]]++;
            }
            for(auto &x: m)
            {
                if(x.second%2!=0)
                {
                    return false;
                }
            }
            return true;
        }
        else return false;
    }
};