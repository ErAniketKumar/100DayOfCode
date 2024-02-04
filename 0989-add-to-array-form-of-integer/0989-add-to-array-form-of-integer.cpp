class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
       vector<int>v;
        while(k>0)
        {
            v.push_back(k%10);
            k/=10;
        }
        int maxsize=v.size()>num.size()?v.size():num.size();
        if(maxsize>num.size())
        {
            int k=0;
            for(int i=num.size();i<maxsize;i++)
            {
                num.push_back(0);
                k++;
            }
            reverse(num.begin(),num.end());
            reverse(num.begin()+k,num.end());
        }
        else if(maxsize>v.size())
        {
             for(int i=v.size();i<maxsize;i++)
            {
                v.push_back(0);
            }
        }

        reverse(v.begin(),v.end());
        vector<int>res;
        int carry=0;
        for(int i=num.size()-1;i>=0;i--)
        {
            int sum=carry+num[i]+v[i];
            res.push_back(sum%10);
            carry=sum/10;
            sum=0;
        }
        if(carry>0)
        res.push_back(carry);
        reverse(res.begin(),res.end());
        return res;
    }
};