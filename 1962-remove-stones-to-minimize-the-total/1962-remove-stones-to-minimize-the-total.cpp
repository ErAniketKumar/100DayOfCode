class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>max_heap;
        for(int i=0;i<piles.size();i++)
        {
            max_heap.push(piles[i]);
        }

        while(k--)
        {
            int front=max_heap.top();
            max_heap.pop();
            max_heap.push(front-(front/2));
        }
        int ans=0;
        while(!max_heap.empty())
        {
            ans+=max_heap.top();
            max_heap.pop();
        }
        return ans;

    }
};