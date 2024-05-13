class Solution {
public:
   void makedirection(char ch, int &dirx, int &diry)
    {
        if(ch=='N')
        {
            dirx+=0;
            diry-=1;
        } else if(ch=='E') {
            dirx+=1;
            diry+=0;
        } else if(ch=='S') {
            dirx+=0;
            diry+=1;
        } else if('W') {
            dirx-=1;
            diry+=0;
        }
    }

    bool checkCross(vector<pair<int, int>>v, int dirx, int diry)
    {
        for(auto x: v)
        {
            if(x.first==dirx && x.second==diry)
            {
                return true;
            }
        }
        return false;
    }
    bool isPathCrossing(string path) {
        vector<pair<int, int>>v;
        int dirx=0, diry=0;
        v.push_back({0,0});
        for(int i=0;i<path.size();i++)
        {
            makedirection(path[i], dirx, diry);
           if(checkCross(v, dirx, diry))
            {
                return true;
            }
            v.push_back({dirx, diry});
        }
        return false;
    }
};