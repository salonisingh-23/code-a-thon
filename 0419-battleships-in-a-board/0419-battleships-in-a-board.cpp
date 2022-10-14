class Solution {
public:
    
         void dfs(vector<vector<char>>& board, int i,int j)
     {
         int n=board.size(),m=board[0].size();
        if(i<0||j<0||i>=n||j>=m||board[i][j]!='X')
            return;
             board[i][j]='Z';
             dfs(board,i+1,j);
             dfs(board,i,j+1);
         
     }
    int countBattleships(vector<vector<char>>& board) {
        int count=0;
        int n=board.size(),m=board[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(board[i][j]=='X')
                {
                    dfs(board,i,j);
                    count++;
                }
            }
        }
         return count;   
    }
};