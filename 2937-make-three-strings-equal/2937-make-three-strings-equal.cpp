class Solution {
public:
    int findMinimumOperations(string s1, string s2, string s3) {
        int minSize=min(s1.size(),min(s2.size(), s3.size()));
      
        if(s1[0]==s2[0] && s2[0]==s3[0]){
          int count=0;
        for(int i=0;i<minSize;i++)
        {
            if(s1[i]==s2[i] && s2[i]==s3[i])
            {
                count++;
            }
            else break;
        }

        int c=(count*3);
        int d=s1.size()+s2.size()+s3.size();
        return d-c;
        }
        return -1;
    }
};