class Solution {
public:
    bool judgeCircle(string moves) {
        int left=0,right=0,up=0,down=0;
        unordered_map<char, int>m;
        for(int i=0;i<moves.size();i++)
        {
            m[moves[i]]++;
        }
        auto upp=m.find('U');
        auto dww=m.find('D');
        auto ll=m.find('L');
        auto rr=m.find('R');
        if(upp!=m.end())
        {
            up=(*upp).second;
        }

        if(dww!=m.end())
        {
            down=(*dww).second;
        }

        if(ll!=m.end())
        {
            left=(*ll).second;
        }

        if(rr!=m.end())
        {
            right=(*rr).second;
        }

        return up-down==0 && left-right==0;



    }
};