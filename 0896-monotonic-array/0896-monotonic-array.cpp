class Solution {
public:
    bool checksort(vector<int>&v)
    {
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>=v[i-1])
            {

            }
            else return false;
        }
        return true;
    }
    bool isMonotonic(vector<int>& nums) {
        int checksort1=checksort(nums);
        reverse(nums.begin(),nums.end());
        int checksort2=checksort(nums);
        if(checksort1 ||checksort2) return true;
        return false;
    }
};