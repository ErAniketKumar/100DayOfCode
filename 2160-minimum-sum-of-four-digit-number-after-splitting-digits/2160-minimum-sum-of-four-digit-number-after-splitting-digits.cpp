class Solution {
public:
    int minimumSum(int num) {
        
        vector<int>v;
        while(num>0)
        {
            v.push_back(num%10);
            num/=10;
        }

        // int sum=v[0]>v[1]?(v[1]*10+v[0]):(v[0]*10+v[1]);
        // int sum2=v[2]>v[3]?(v[3]*10+v[2]):(v[2]*10+v[3]);

        sort(v.begin(), v.end());
    string ss=to_string(v[0]);
    ss+=to_string(v[2]);
    string ss2=to_string(v[1]);
    ss2+=to_string(v[3]);

    int sumt=stoi(ss)+stoi(ss2);

        return sumt;
    }
};