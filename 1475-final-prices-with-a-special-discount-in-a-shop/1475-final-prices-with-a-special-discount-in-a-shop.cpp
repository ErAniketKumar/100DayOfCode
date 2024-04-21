class Solution {
public:

    int greater(int start, int target, vector<int>prices)
    {
        for(int i=start;i<prices.size();i++)
        {
          if(prices[i]<=target && i>start)
          return i;
        }
        return -1;
    }
    vector<int> finalPrices(vector<int>& prices) {
       for(int i=0;i<prices.size();i++)
       {
         int idx=greater(i, prices[i],prices);
         if(idx!=-1)
         {
            prices[i]-=prices[idx];
         }
       }
        return prices;
    }
};