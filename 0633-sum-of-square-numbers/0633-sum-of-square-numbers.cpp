class Solution {
public:
    bool judgeSquareSum(int n) {
        
    int sq = sqrt(n);
    unordered_map<int, int> m;
    for (int i = 0; i <= sq; i++)
    {
        m[i * i]++;
    }

    for (int i = 0; i <= sq; i++)
    {
        int half = n - (i * i);
        if (m.find(half) != m.end())
        {
            return true;
        }
    }
    return false;
    }
};