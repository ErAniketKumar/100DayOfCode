class Solution {
public:
    void adjecentMark(vector<bool>&visited, int idx)
    {
        if(idx-1>=0 && idx+1<=visited.size()-1)
        {
            visited[idx-1]=true;
            visited[idx+1]=true;
        }
        else if(idx==visited.size()-1 && idx-1>=0)
        {
            visited[idx-1]=true;
        }
        else if(idx==0 && idx+1<=visited.size()-1)
        {
            visited[idx+1]=true;
        }
    }
    long long findScore(vector<int>& nums) {
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>min_heap;
        vector<bool>visited(nums.size(), false);
        for(int i=0;i<nums.size();i++)
        {
            min_heap.push({nums[i],i});
        }
        long long score=0;
        while(!min_heap.empty())
        {
            auto it=min_heap.top();
            min_heap.pop();
            if(!visited[it.second])
            {
                visited[it.second]=true;
                score+=it.first;
                adjecentMark(visited,it.second);
            }
        }
        return score;
    }
};