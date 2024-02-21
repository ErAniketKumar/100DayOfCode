class Solution {
public:
    vector<int> distributeCandies(int candy, int men) {
        vector<int>v(men);
        int i=0,temp=1;
        while(candy>0)
        {
            if(i>=men && candy!=0)
            {
                i=0;
            }
            if(temp<candy)
            {
                v[i]+=temp;
                candy-=temp;
            }
            else{
                v[i]+=candy;
                return v;
            }
            i++;temp++;
        }

        return v;
    }
};