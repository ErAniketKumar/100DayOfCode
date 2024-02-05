class Solution {
public:
    int countOdds(int low, int high) {
        int todd=ceil(high/2.0);
        int rodd=ceil((low-1)/2.0);
        return todd-rodd;
    }
};