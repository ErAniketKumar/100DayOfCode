class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int mindiff=INT_MAX;
        for(int i=1;i<arr.size();i++)
        {
            mindiff=min(mindiff, abs(arr[i]-arr[i-1]));
        }
        vector<vector<int>>ans;
        for(int i=1;i<arr.size();i++)
        {
            vector<int>v;
            if(mindiff==abs(arr[i]-arr[i-1]))
            {
                v.push_back(arr[i-1]);
                v.push_back(arr[i]);
            }
            if(!v.empty())
            ans.push_back(v);
            v.clear();
        }
        return ans;
    }
};