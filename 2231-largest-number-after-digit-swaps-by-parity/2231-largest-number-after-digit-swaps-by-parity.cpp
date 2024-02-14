class Solution {
public:
    int largestInteger(int num) {
        vector<int>odd,even,digit;

        while(num>0)
        {
            int r=num%10;
            if(r%2==0)
            even.push_back(r);
            else
            odd.push_back(r);
            digit.push_back(r);
            num/=10;
        }
        
    
    reverse(digit.begin(),digit.end());
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end());
    
    vector<int>ans;
    for(int i=0;i<digit.size();i++)
    {
        if(digit[i]%2==0)
        {
            ans.push_back(even[even.size()-1]);
            even.erase(even.end()-1);
        }
        else{
            ans.push_back(odd[odd.size()-1]);
            odd.erase(odd.end()-1);
        }
    }

    string s="";
    for(int i=0;i<ans.size();i++)
    {
        s+=to_string(ans[i]);
    }
    return stoi(s);
    }
    
};