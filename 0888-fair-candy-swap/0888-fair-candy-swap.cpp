class Solution {
public:
    vector<int> fairCandySwap(vector<int>& aliceSizes, vector<int>& bobSizes) {
        vector<int>ans;
        int sum1=0, sum2=0;
        for(int i=0;i<aliceSizes.size();i++)
        {
            sum1+=aliceSizes[i];
        }

        for(int i=0;i<bobSizes.size();i++)
        {
            sum2+=bobSizes[i];
        }

        int half=(sum1-sum2)/2;
        unordered_map<int, int>m;
        for(int i=0;i<bobSizes.size();i++)
        {
            m[bobSizes[i]]++;
        }

        for(int i=0;i< aliceSizes.size();i++)
        {
            if(m.find(aliceSizes[i]-half)!=m.end())
            {
                ans.push_back(aliceSizes[i]);
                ans.push_back(aliceSizes[i]-half);
                break;
            }
        }
        return ans;

    }
};