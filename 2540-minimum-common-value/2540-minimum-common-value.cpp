class Solution {
public:
    int getCommon(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        int ans=INT_MAX;
        for(int i=0;i<nums2.size();i++)
        {
            auto it=m.find(nums2[i]);
            if(it!=m.end())
            {
                ans=min((*it).first,ans);
            }
        }
        if(ans==INT_MAX) ans=-1;
        return ans;
    }
};