class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int, int>m;
        vector<pair<int, int>>p;
        int counter=0;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto &x: m)
        {
            p.push_back({x.second, x.first});
        }   
        sort(p.begin(), p.end());
        reverse(p.begin(), p.end());
        int frq=0;
        int n=arr.size();
        for(auto x: p)
        {
            frq+=x.first;
            counter++;
            if(frq>=ceil(n/2))
            break; 
        }
        return counter;
    }
};