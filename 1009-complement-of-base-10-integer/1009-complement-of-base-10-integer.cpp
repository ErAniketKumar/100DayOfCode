
class Solution {
public:


    int bitwiseComplement(int n) {
    vector<int> binary;
    if (n == 0)
        binary.push_back(0);
    while (n > 0) {
        binary.push_back(n % 2);
        n /= 2;
    }

    reverse(binary.begin(), binary.end());
    for(int i=0;i<binary.size();i++)
    {
        if(binary[i]==1)
        {
            binary[i]=0;
        }
    
    else if(binary[i]==0){
            binary[i]=1;
        }
    }

    int decimal = 0;
    int size = binary.size();
    for(int i = 0; i < size; ++i) {
        if(binary[size - i - 1] == 1) {
            decimal += pow(2, i);
        }
    }

    return decimal;
    


    }
};