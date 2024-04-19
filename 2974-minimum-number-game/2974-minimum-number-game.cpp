class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        priority_queue<int, vector<int>, greater<int>>min_heap;
        for(int i=0;i<nums.size();i++)
        {
            min_heap.push(nums[i]);
        }
        vector<int>ans;
        while(!min_heap.empty())
        {
            int alic=min_heap.top(); min_heap.pop();
            int bob=min_heap.top(); min_heap.pop();
            ans.push_back(bob);
            ans.push_back(alic);
        }
        return ans;
    }
};