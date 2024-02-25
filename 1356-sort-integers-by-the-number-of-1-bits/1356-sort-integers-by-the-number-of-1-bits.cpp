class Solution {
public:
void countOne(int n, vector<pair<int, int>>&p)
{
    int temp=n;
    int count=0;
    while(temp>0)
    {
        if(temp%2)
        count++;
        temp/=2;
    }
    p.push_back({count, n});
}
 vector<int> sortByBits(vector<int>& arr) {
     vector<pair<int, int>>p;
        for(int i=0;i<arr.size();i++)
        {
            countOne(arr[i], p);
        }

        sort(p.begin(), p.end());
        vector<int>res;
        for(int i=0;i<p.size();i++)
        {
            res.push_back(p[i].second);
        }
        return res;
    }
};