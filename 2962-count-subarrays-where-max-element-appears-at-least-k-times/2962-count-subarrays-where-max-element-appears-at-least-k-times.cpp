class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        
        int n=nums.size();
        int i=0,j=0;
        long long count=0;
        int maxi=*max_element(nums.begin(), nums.end());
        unordered_map<int, int>m;
        while(j<n)
        {
            m[nums[j]]++;
            while( i<=j && m[maxi]>=k)
            {
                count+=n-j;
                m[nums[i]]--;
                i++; 
            }
            
            j++;
        }
        return count;
    }
};