class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>v;
        while(n>0)
        {
            v.push_back(n%10);
            n/=10;
        }
        reverse(v.begin(), v.end());
        int psum=0;
        int nsum=0;
        for(int i=0;i<v.size();i++)
        {
            if(i%2==0)
            psum+=v[i];
            if(i%2!=0)
                nsum+=(-v[i]);
            
        }


        return psum+nsum;
    }
};