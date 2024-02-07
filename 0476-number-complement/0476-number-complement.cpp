class Solution {
public:
    int findComplement(int num) {
        vector<int>binary;
         if (num == 0)
        binary.push_back(0);
        while(num>0)
        {
            binary.push_back(num%2);
            num/=2;
        }

        reverse(binary.begin(), binary.end());

        int size=binary.size();
        for(int i=0;i<size;i++)
        {
            if(binary[i]==1)
            {
                binary[i]=0;
            }
            else{
                binary[i]=1;
            }
        }
      

        int dec=0;

        for(int i=0;i<size;i++)
        {
           if(binary[size - i - 1] == 1) {
            dec += pow(2, i);
        }
        }
        return dec;
    }
};