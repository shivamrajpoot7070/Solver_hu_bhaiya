class Solution {
public:

    int find(vector<vector<int>>& grid, int x, int y, vector<vector<int>>& dp) {

        int n=grid.size();
        int m=grid[0].size();

        if(x==n-1 && y==m-1){
            return grid[x][y];
        }

        if(x>=n || y>=m){
            return 1e9;
        }

        if(dp[x][y]!=-1){
            return dp[x][y];
        }


        int ryt=grid[x][y]+find(grid,x+1,y,dp);
        int bot=grid[x][y]+find(grid,x,y+1,dp);

        dp[x][y]=min(ryt,bot);

        return dp[x][y];




    }
    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        // Initialize dp table with -1 (indicating uncomputed states)
        vector<vector<int>> dp(n, vector<int>(m, -1));

        // Start from the top-left corner
        return find(grid, 0, 0, dp);
        
    }
};