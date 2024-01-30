class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int>m;
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]++;
        }
        set<int>s;
        nums2.clear();
        for(int i=0;i<nums1.size();i++)
        {
            if(m.find(nums1[i])!=m.end())
            {
                s.insert(nums1[i]);
            }
        }

        for(auto &x: s)
        {
            nums2.push_back(x);
        }
        return nums2;
    }
};