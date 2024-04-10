class Solution {
public:
    vector<int> deckRevealedIncreasing(vector<int>& deck) {
        
        sort(deck.begin(),deck.end());
        vector<int>ans(deck.size());
        queue<int>qu;
        for(int i=0;i<deck.size();i++)
        {
            qu.push(i);
        }
        for(int i=0;i<deck.size();i++)
        {
            int first=qu.front(); qu.pop();
            int second=qu.front(); qu.pop();
            ans[first]=deck[i];
            qu.push(second);
        }
        return ans;
    }
};