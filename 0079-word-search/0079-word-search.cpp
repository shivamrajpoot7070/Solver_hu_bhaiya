class Solution {
public:
    vector<vector<int>> directions{{1,0},{-1,0},{0,1},{0,-1}};
    int n, m;

    bool find(vector<vector<char>>& arr, int i, int j, int idx, string &word) {
        if (idx == word.length()) return true;

        // Boundary check
        if (i < 0 || j < 0 || i >= n || j >= m || arr[i][j] == '$' || arr[i][j] != word[idx]) 
            return false;

        char temp = arr[i][j];
        arr[i][j] = '$'; // Mark as visited

        // Explore all four directions
        for (auto dir : directions) {
            int newi = i + dir[0];
            int newj = j + dir[1];

            if (find(arr, newi, newj, idx + 1, word)) {
                return true;
            }
        }

        arr[i][j] = temp; // Backtrack (restore original value)
        return false;
    }

    bool exist(vector<vector<char>>& arr, string word) {
        n = arr.size();
        m = arr[0].size();

        // Step 1: Pruning - Check if word is possible in the grid
        // unordered_map<char, int> boardFreq, wordFreq;
        // for (auto &row : arr)
        //     for (char c : row)
        //         boardFreq[c]++;

        // for (char c : word) 
        //     wordFreq[c]++;

        // for (auto &[ch, freq] : wordFreq) {
        //     if (boardFreq[ch] < freq) return false; // If not enough occurrences, return early
        // }

        // Step 2: Try to start DFS from every cell that matches word[0]
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (arr[i][j] == word[0] && find(arr, i, j, 0, word)) {
                    return true;
                }
            }
        }

        return false;
    }
};
