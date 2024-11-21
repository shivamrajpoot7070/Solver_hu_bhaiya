class Solution {
public:

    void markDirection(int x, int y, int dx, int dy, int m, int n, vector<vector<int>>& grid) {
        while (x >= 0 && x < m && y >= 0 && y < n) {
            if (grid[x][y] == 1 || grid[x][y] == 2) break; // Stop at wall or guard
            if (grid[x][y] == 0) grid[x][y] = 3; // Mark as guarded
            x += dx;  // for x directio
            y += dy;   //for y direction
        }
    }

    int countUnguarded(int m, int n, vector<vector<int>>& guards, vector<vector<int>>& walls) {
        
        vector<vector<int>> grid(m, vector<int>(n, 0));

        
        for (auto& wall : walls) grid[wall[0]][wall[1]] = 1;
        for (auto& guard : guards) grid[guard[0]][guard[1]] = 2;

        // Traverse for each guard and mark directions
        for (auto& guard : guards) {
            int x = guard[0], y = guard[1];
            markDirection(x + 1, y, 1, 0, m, n, grid); // Down me jyga row bdhega or col waisa hi isly 0
            markDirection(x - 1, y, -1, 0, m, n, grid); // Upper me jyga to row kam hoga isly -1 taki kam hote jaye
            markDirection(x, y + 1, 0, 1, m, n, grid); // Right
            markDirection(x, y - 1, 0, -1, m, n, grid); // Left
        }

        // Count unguarded cells
        int ct = 0;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (grid[i][j] == 0) ct++;
            }
        }

        return ct;
    

        
    }
};