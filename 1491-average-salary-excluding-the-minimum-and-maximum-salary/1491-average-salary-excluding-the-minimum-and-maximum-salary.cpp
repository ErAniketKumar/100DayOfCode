class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        vector<double>v;
        int div=salary.size()-2;
        for(int i=1;i<salary.size()-1;i++)
        {
            v.push_back((1.0*salary[i])/div);
        }
        double sum=0;
        for(int i=0;i<v.size();i++)
        {
            sum+=v[i];
        }
        
        return sum;
        
    }
};