class Solution {
public:
    long long pickGifts(vector<int>& gifts, int k) {
        priority_queue<int>max_heap;
        for(int i=0;i<gifts.size();i++)
        {
            max_heap.push(gifts[i]);
        }
        while(k--)
        {
            int front=max_heap.top();
            max_heap.pop();
            max_heap.push(floor(sqrt(front)));
        }

        long long sum=0;
        while(!max_heap.empty())
        {
            sum+=max_heap.top();
            max_heap.pop();
        }
        return sum;
    }
};