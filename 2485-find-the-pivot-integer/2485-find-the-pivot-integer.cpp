class Solution {
public:
    int pivotInteger(int n) {
        if(n==1) return 1;
        int allsum=(n*(n+1))/2;
        int lsum=0;
        for(int i=1;i<=n;i++)
        {
            lsum+=i;
            if(allsum-lsum==0) return i;
            allsum-=i;
        }
        return -1;
    }
};