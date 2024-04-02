
class Node{
    public:
    int row, col, time;
    Node(int row, int col, int time)
    {
        this->row=row;
        this->col=col;
        this->time=time;
    }
};

class Solution {
public:
    bool isvalid(int x, int y, int rows, int cols)
    {
        if(x>=0 && x<rows && y>=0 && y<cols)
        return true;
        return false;
    }
    vector<vector<int>>directions={{-1,0},{0,1},{1,0},{0,-1}};
    int orangesRotting(vector<vector<int>>& grid) {
        
        int rows=grid.size();
        int cols=grid[0].size();
        queue<Node>qu;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==2)
                {
                    Node nd(i,j,0);
                    qu.push(nd);
                }
            }
        }

        int minTime=0;
        while(!qu.empty())
        {
            Node n=qu.front();
            qu.pop();

            for(auto dir:directions)
            {
                int newRow= n.row+dir[0];
                int newCol= n.col+dir[1];

                if(isvalid(newRow, newCol, rows, cols) && grid[newRow][newCol]==1)
                {
                    Node nd(newRow, newCol, n.time+1);
                    qu.push(nd);
                    grid[newRow][newCol]=2;
                    minTime=n.time+1;
                }
            }

        }

        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(grid[i][j]==1)
                {
                    return -1;
                }
            }
        }


        return minTime;
    }
};