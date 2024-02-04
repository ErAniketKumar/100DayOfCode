class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int, int>m;
        for(int i=0;i<arr1.size();i++)
        {
            m[arr1[i]]++;
        }
        vector<int>v;
        unordered_map<int, int>m2;
        for(int i=0;i<arr2.size();i++)
        {
           int frq=m[arr2[i]];
           while(frq--)
           {
               v.push_back(arr2[i]);
           }
           m2[arr2[i]]++;
        }
        int size=v.size();

        for(int i=0;i<arr1.size();i++)
        {
            if(m2.find(arr1[i])==m2.end())
            {
                v.push_back(arr1[i]);
            }
        }
        sort(v.begin()+size, v.end());
        return v;

    }
};