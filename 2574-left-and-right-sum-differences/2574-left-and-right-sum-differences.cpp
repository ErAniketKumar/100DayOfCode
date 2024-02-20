class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>lsum;
        lsum.push_back(0);
        lsum.insert(lsum.end(), nums.begin(), nums.end()-1);
        vector<int>rsum(nums.begin()+1, nums.end());
        rsum.push_back(0);
        for(int i=2;i<lsum.size();i++)
        {
            lsum[i]+=lsum[i-1];
        }

        reverse(rsum.begin(), rsum.end());

        for(int i=2;i<rsum.size();i++)
        {
            rsum[i]+=rsum[i-1];
        }

        reverse(rsum.begin(), rsum.end());

        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            ans.push_back(abs(lsum[i]-rsum[i]));
        }
        if(ans.empty())
        {
            ans.push_back(0);
        }
        return ans;
        


    }
};