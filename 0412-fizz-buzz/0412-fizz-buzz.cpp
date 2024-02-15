class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string>v;
        for(int i=1;i<=n;i++)
        {
            v.push_back(to_string(i));
        }
        for(int i=0;i<v.size();i++)
        {
            if((i+1)%3==0 &&(i+1)%5==0)
            {
                v[i]="FizzBuzz";
            }
            else if((i+1)%3==0)
            {
                v[i]="Fizz";
            }
            else if((i+1)%5==0)
            {
                v[i]="Buzz";
            }
        }
        return v;
    }
};