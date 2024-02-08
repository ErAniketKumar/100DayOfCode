class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int>v;
        int sum=0;
        if(n==1)
        {
            v.push_back(0);
            return v;
        }
        if(n==2)
        {
            v.push_back(-1);
            v.push_back(1);
            return v;
        }
        
        for(int i=0;i<n-1;i++)
        {
            v.push_back(i);
            sum+=i;
        }
        v.push_back(-sum);
        return v;
    }
};