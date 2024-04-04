class Solution {
    private:

    vector<vector<int>>directions={{-1,0}, {0,1},{1,0},{0,-1}};
    bool isValidCell(int x, int y, int rows, int cols)
    {
        if(x>=0 && x<rows && y>=0  && y<cols)
        return true;
        else return false;
    }
  
    
    public:
    void solve(vector<vector<char>>& board) {
        int rows=board.size();
        int cols=board[0].size();
        queue<pair<int, int>>qu;
        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(i==0 || i== rows-1 || j==0 || j==cols-1)
                {
                    if(board[i][j]=='O')
                    {
                        qu.push({i,j});
                        board[i][j]='V';
                    } 
                }
            }
        }

        while(!qu.empty())
        {
            auto x=qu.front();
            qu.pop();
            for(auto &dir: directions)
            {
                int newRow=x.first+dir[0];
                int newCol=x.second+dir[1];
                if(isValidCell(newRow, newCol,rows,cols) && board[newRow][newCol]=='O')
                {
                    qu.push({newRow, newCol});
                    board[newRow][newCol]='V';
                }
            }

        }


        for(int i=0;i<rows;i++)
        {
            for(int j=0;j<cols;j++)
            {
                if(board[i][j]=='V')
                {
                    board[i][j]='O';
                }
                else{
                    board[i][j]='X';
                }
            }
        }


    }
};