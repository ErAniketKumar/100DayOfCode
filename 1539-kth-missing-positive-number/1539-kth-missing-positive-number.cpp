class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        vector<int>v;
        unordered_map<int, int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(int i=1;i<=1000;i++)
        {
            if(m.find(i)==m.end())
            {
                v.push_back(i);
            }
        }
        if (k <= v.size()) {
            return v[k - 1];
        }
        else return arr.size()+k;
    }
};