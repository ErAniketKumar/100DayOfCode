class Solution {
public:
    string addStrings(string num1, string num2) {
       int len1=num1.size();
        int len2=num2.size();
        int inc=0;
        int jnc=0;
        if(len1>len2)
        {
            for(int i=1;i<=len1-len2;i++)
            {
                inc++;
                num2+="0";
            }

            reverse(num2.begin(), num2.end());
            reverse(num2.begin()+inc, num2.end());
      
        }
        else if(len2>len1){
            for(int i=1;i<=len2-len1;i++)
            {
                num1+="0";
                jnc++;
            }
            reverse(num1.begin(), num1.end());
            reverse(num1.begin()+jnc, num1.end());
          
        }
        int carry=0;
        string ans="";
        for(int i=len1>len2?len1-1:len2-1;i>=0;i--)
        {
            int sum=(num1[i]-'0' + num2[i]-'0')+carry;
            ans+=to_string(sum%10);
            carry=sum/10;
            sum=0;
        }
        if(carry>0)
        {
            ans+=to_string(carry);
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};