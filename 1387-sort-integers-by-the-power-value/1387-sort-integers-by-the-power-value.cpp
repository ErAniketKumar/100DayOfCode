class Solution {
public:

    int steps(int n)
    {
        long long counter=0;
        while(n!=1)
        {
            counter++;
            if(n%2==0)
            {
                n=n/2;
            }
            else if(n%2!=0){
                n=(n*3)+1;
            }
            if(n<=1) break;
        }
        return counter;

    }
    int getKth(int lo, int hi, int k)
    {
    
        vector<pair<int,int>> ans;
        for (int i = lo; i <= hi; i++)
        {
            ans.push_back({steps(i), i});
        }
        sort(ans.begin(), ans.end());
    
        cout<<endl;
        return ans[k - 1].second;
    
    }
};