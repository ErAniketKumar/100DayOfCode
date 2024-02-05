class Solution {
public:
    string thousandSeparator(int n) {
       vector<int>v;
       if(n==0) return to_string(0);
        while(n>0)
        {
            v.push_back(n%10);
            n/=10;
        }
        string word="";
        for(int i=0;i<v.size();i++)
        {
            if(i<=2)
            word+=to_string(v[i]);
            else break;
        }
        if(v.size()>3){
        for(int i=3;i<v.size();i++)
        {
            if(i%3==0)
            {
                word+=".";
                word+=to_string(v[i]);
            }
            else word+=to_string(v[i]);
        }
        
        }
        reverse(word.begin(), word.end());
        return word;
        
    }
};