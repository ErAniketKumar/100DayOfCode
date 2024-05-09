class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        priority_queue<int> max_heap;
        for(int i=0;i<happiness.size();i++)
        {
            max_heap.push(happiness[i]);
        }
        long long hpsum=0;
        int i=0;
        while(i<k)
        {
            int temp=max_heap.top();
            max_heap.pop();
            if(temp-i>0)
            hpsum+=temp-i;
            else
            hpsum+=0;
            i++;
        }
        return hpsum;
    }
};