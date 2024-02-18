class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(), salary.end());
        vector<double>v;
        int div=salary.size()-2;
        double sum=0;
        for(int i=1;i<salary.size()-1;i++)
        {
            sum+=((1.0*salary[i])/div);
        }
        return sum;
        
    }
};