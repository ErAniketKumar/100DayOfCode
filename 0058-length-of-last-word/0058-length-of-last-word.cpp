class Solution {
public:
    int lengthOfLastWord(string s) {
        int whitespace=0;
        int len=s.length()-1;
        // if(s.size()==1 && s[0]!=' ') return 1;
        for(int i=len;i>=0;i--)
        {
            if(s[i]==' ')
            {
                whitespace++;
            }
            else break;
        }
        int count=0;
        for(int i=len-whitespace;i>=0;i--)
        {
            if(s[i]!=' ')
            {
                count++;
            }
            else break;
        }
        return count;
    }
};