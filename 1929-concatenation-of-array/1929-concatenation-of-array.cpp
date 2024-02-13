class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>first(nums.begin(), nums.end());
        first.insert(first.end(), nums.begin(), nums.end());
        return first;
    
    }
};