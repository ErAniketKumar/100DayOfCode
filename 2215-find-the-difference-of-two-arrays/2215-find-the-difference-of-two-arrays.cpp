class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>>ans;
        set<int>s1,s2;
        unordered_map<int, int>m,m2;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            m2[nums2[i]]++;
        }
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])==m.end())
            {
                s2.insert(nums2[i]);
            }
        }

        for(int i=0;i<nums1.size();i++)
        {
            if(m2.find(nums1[i])==m2.end())
            {
                s1.insert(nums1[i]);
            }
        }
        vector<int>vv(s1.begin(),s1.end());
        ans.push_back(vv);
        vv.clear();
        vv.insert(vv.begin(),s2.begin(),s2.end());
        ans.push_back(vv);
        vv.clear();
        return ans;

        

    }
};