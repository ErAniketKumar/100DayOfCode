class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int, int>m;
        for(int i=0;i<arr.size();i++)
        {
            m[arr[i]]++;
        }
        for(auto &x: m)
        {
            if(x.first==0 && x.second>1) return true;
        }
        for(int i=0;i<arr.size();i++)
        {
            if(m.find((arr[i]*2))!=m.end() && arr[i]!=0)
            return true;
        }
        return false;
    }
};