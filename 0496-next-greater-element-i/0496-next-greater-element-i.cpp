class Solution {
public:
    int greaterEle(vector<int>v, int start, int target)
    {
        for(int i=start;i<v.size();i++)
        {
            if(v[i]>target)
            {
                return v[i];
            }
        }
        return -1;
    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        
        unordered_map<int, int>m;
        for(int i=0;i<nums2.size();i++)
        {
            m[nums2[i]]=i;
        }
        vector<int>res;
        for(int i=0;i<nums1.size();i++)
        {
            auto it=m.find(nums1[i]);
            if(it!=m.end())
            {
                res.push_back(greaterEle(nums2, (*it).second,(*it).first));
            }
        }
        return res;
    }
};