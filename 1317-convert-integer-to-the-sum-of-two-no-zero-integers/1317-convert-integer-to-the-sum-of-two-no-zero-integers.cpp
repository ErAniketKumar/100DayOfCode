class Solution {
public:
    bool checkNonZero(int x, int y)
    {
        int c=0,d=0;
        while(x>0)
        {
            if(x%10==0)
            {
                c++;
            }
            x/=10;
        }
        while(y>0)
        {
            if(y%10==0)
            {
                d++;
            }
            y/=10;
        }

        if(c||d)
        {
            return false;
        }
        else return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        // int b=(n-1)%10==0?(n-2):(n-1);
        // int a=n-b;
        vector<int>res;
        // res.push_back(a);
        // res.push_back(b);
        // return res;
    
        for(int i=1;i<=n;i++)
        {
            int a=i;
            int b=n-i;
            if(a+b==n && checkNonZero(a,b)){
                res.push_back(a);
                res.push_back(b);
                break;
            }

        }
        return res;
    }
};