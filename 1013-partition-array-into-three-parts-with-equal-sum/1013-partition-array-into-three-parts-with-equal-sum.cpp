class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            sum+=arr[i];
        }
        if(sum%3==0)
        {
        int partSum = sum / 3;
        int currentSum = 0, count = 0;

        for (int i = 0; i < arr.size(); i++) {
            currentSum += arr[i];
            
            if (currentSum == partSum) {
                currentSum = 0; 
                count++;
            }
        }

        return count >= 3;

            
        }
        else return false;
}
};