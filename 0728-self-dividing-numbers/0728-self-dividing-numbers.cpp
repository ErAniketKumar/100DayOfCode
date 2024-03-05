class Solution {
public:
    bool checkDev(int n, vector<int>v)
    {
        for(int i=0;i<v.size();i++)
        {
            if(v[i]!=0 && n%v[i]==0)
            {

            }
            else return false;
        }
        return true;
    }
    bool checkSelfDevid(int n)
    {
        vector<int>digit;
        int temp=n;
        while(temp>0)
        {
            digit.push_back(temp%10);
            temp/=10;
        }
        return checkDev(n,digit);
    }
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            if(checkSelfDevid(i))
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};