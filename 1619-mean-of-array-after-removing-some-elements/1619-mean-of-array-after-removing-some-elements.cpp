class Solution {
public:
    double trimMean(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        int n=arr.size();
        int mini=n*0.05;
        int maxi=n*0.05;
        // arr.erase(arr.begin()+mini, arr.end());
        // arr.erase(arr.begin()+(n-mini), arr.end());
        int count=0;
        double sum=0;

        for(int i=mini;i<arr.size()-maxi;i++)
        {
            sum+=arr[i];
            count++;
        }
        return (sum/count);
    }
};