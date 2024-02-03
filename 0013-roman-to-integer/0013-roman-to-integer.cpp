class Solution {
public:
    int integerVal(char ch)
    {
        int ans=0;
        switch(ch)
        {
            case 'I': ans=1;
            break;
            case 'V': ans=5;
            break;
            case 'X': ans=10;
            break;
            case 'L': ans=50;
            break;
            case 'C': ans=100;
            break;
            case 'D': ans=500;
            break;
            case 'M': ans=1000;
            break;
        }
        return ans;
    }
    int romanToInt(string s) {
        vector<int>v;
        for(int i=0;i<s.length();i++)
        {
            v.push_back(integerVal(s[i]));
        }
        
        reverse(v.begin(), v.end());
        long long sum=v[0];
        for(int i=1;i<v.size();i++)
        {
            if(v[i]>=v[i-1])
            {
                sum+=v[i];
            }
            else
            {
                sum-=v[i];
            }
        }
      return sum;
          
    }
};