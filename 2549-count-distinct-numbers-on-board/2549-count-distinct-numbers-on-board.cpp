class Solution {
public:
    int distinctIntegers(int n) {
        if(n==1) return 1;
        set<int>s;
        for(int i=1;i<=n;i++)
        {
           for(int j=1;j<=n;j++)
           {
               if(i%j==1)
               s.insert(j);
           }
        }
        return s.size();
    }
};