class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coord) {
        if(coord.size()<=2) return true;
            int x1=coord[0][0];
            int y1=coord[0][1];
            int x2=coord[1][0];
            int y2=coord[1][1];
            int dx=x2-x1;
            int dy=y2-y1;
        for(int i=2;i<coord.size();i++)
        {
            int xi=coord[i][0];
            int yi=coord[i][1];

            if(dx * (yi - y2) != dy * (xi - x2))
            return false;
            
        }
        return true;
    }
};