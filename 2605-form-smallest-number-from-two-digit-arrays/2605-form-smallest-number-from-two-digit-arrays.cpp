class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(), nums2.end());
        int min1=nums1[0];
        int min2=nums2[0];
        unordered_map<int, int>m;
        for(int i=0;i<nums1.size();i++)
        {
            m[nums1[i]]++;
        }
        int samedigit=INT_MAX;
        for(int i=0;i<nums2.size();i++)
        {
            if(m.find(nums2[i])!=m.end())
            {
                samedigit=nums2[i];
                break;
            }
        }

        int small =min1>min2?(min2*10)+min1:(min1*10)+min2;   
        return samedigit>small?small:samedigit;
    }
};