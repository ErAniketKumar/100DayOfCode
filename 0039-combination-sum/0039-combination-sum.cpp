class Solution {
public:
    void findAllCombination(int idx, vector<int>&candidates,vector<int>helper,  vector<vector<int>>&ans, int target ) {
        if(idx==candidates.size()) {
            if(target==0) {
                ans.push_back(helper);
            }
            return;
        }
        if(target>=candidates[idx]) {
              helper.push_back(candidates[idx]);
    findAllCombination(idx, candidates, helper, ans, target-candidates[idx]);
    helper.pop_back();
        }
        findAllCombination(idx+1, candidates, helper, ans, target);
    

    }
vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int>helper;
        vector<vector<int>>ans;
        findAllCombination(0, candidates, helper, ans, target);
        return ans;
    }
};