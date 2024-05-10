class Solution {
public:
struct ComparePairs {
    bool operator()(const pair<double, vector<int>>& p1, const pair<double, vector<int>>& p2) const {
        return p1.first < p2.first;
    }
};

    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        vector<double>res;
         priority_queue<pair<double, vector<int>>, vector<pair<double, vector<int>>>, ComparePairs> max_heap;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=arr.size()-1;j>i;j--)
            {
                vector<int>temp;
                temp.push_back(arr[i]);
                temp.push_back(arr[j]);
                double x=arr[i];
                double y=arr[j];
                x=1.0*(x);
                y=1.0*(y);
                max_heap.push({x/y,temp});
                if(max_heap.size()>k)
                {
                    max_heap.pop();
                }
            }
        }
        auto it=max_heap.top();
        return it.second;
    }
};