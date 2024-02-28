class Solution {
public:
    int furthestDistanceFromOrigin(string moves) {
        int lcount=0,rcount=0,underline=0;
        for(int i=0;i<moves.size();i++)
        {
            if(moves[i]=='L')
            lcount++;
            else if(moves[i]=='R')
            rcount++;
            else underline++;
        }

        return abs(lcount>rcount?(lcount+underline)-rcount:(rcount+underline)-lcount);
        
    }
};