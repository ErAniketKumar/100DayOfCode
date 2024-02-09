class Solution {
public:
    int minOperations(string s) {
        if (!s.length()) {
            return 0;
        }
        int count1 = 0, count2 = 0; 
        for (int i=0;i<s.length();i++) {
            if (i%2==0) {
                if (s[i] == '0') count1++;
                else count2++;
            }
            else {
                if (s[i] == '0') count2++;
                else count1++;
            }
        }
        return min(count1, count2);

        // int one=s.size()-zero;

        // if(one==zero || one==zero-1 || zero==one-1)
        // return 0;
        // int ans=0;
        
        //     ans=(one>zero?one:zero);
        //     ans-=ceil(s.size()/2);
        
        // return ans;


        // int count=0;
        // for(int i=1;i<s.size();i++)
        // {
        //     if(s[i]==s[i-1])
        //     {
        //         count++;
        //     }
        // }
        // return count;
    }
};