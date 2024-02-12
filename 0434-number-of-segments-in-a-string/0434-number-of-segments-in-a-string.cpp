class Solution {
public:
    int countSegments(string s) {
        if(s=="") return 0;
        int inword=0;
        int countword=0;
        for(int i=0;i<s.size();i++)
        {

            if(s[i]==' ')
            {
                inword=0;
            }
            else if(inword==0)
            {
                inword=1;
                countword++;
            }
        }
        return countword;

    }
};