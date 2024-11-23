class Solution {
public:

    int find(vector<vector<int>>& grid, int x, int y, vector<vector<int>>& dp) {
        int n = grid.size();
        int m = grid[0].size();

        // Base case: if we reach the bottom-right cell, return its value
        if (x == n - 1 && y == m - 1) {
            return grid[x][y];
        }

        // If out of bounds, return a large value (infinite)
        if (x >= n || y >= m) {
            return INT_MAX;
        }

        // If already computed, return the cached value
        if (dp[x][y] != -1) {
            return dp[x][y];
        }

        // Recursive calculation with memoization
        int right = find(grid, x, y + 1, dp);     // Move right
        int down = find(grid, x + 1, y, dp);     // Move down

        // Store the minimum path sum in dp and return it
        dp[x][y] = grid[x][y] + min(right, down);
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