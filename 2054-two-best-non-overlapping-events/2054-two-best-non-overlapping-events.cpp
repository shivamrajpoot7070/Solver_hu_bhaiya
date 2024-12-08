class Solution {
public:

     int bs(vector<vector<int>>& arr, int end) {
        int ind = arr.size();
        int l = 0, h = arr.size() - 1;

        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (arr[mid][0] > end) {
                ind = mid;
                h = mid - 1;
            } else {
                l = mid + 1;
            }
        }
        return ind;
    }

    int solve(vector<vector<int>>& arr, int ind, int ct, vector<vector<int>>& dp) {
        if (ct == 2 || ind >= arr.size()) {
            return 0;
        }

        if (dp[ind][ct] != -1) {
            return dp[ind][ct];
        }

        int validindex = bs(arr, arr[ind][1]);

        // Take the current event aage usko lo jiska start time iske end time se aage ho wai dhundne k liy binary serahc
        int take = arr[ind][2] + solve(arr, validindex, ct + 1, dp);

        // Skip the current event
        int nt = solve(arr, ind + 1, ct, dp);

        return dp[ind][ct] = max(take, nt);
    }

    int maxTwoEvents(vector<vector<int>>& arr) {
        sort(arr.begin(), arr.end());
        int n = arr.size();

        // Initialize DP array
        vector<vector<int>> dp(n, vector<int>(3, -1));

        return solve(arr, 0, 0, dp);
    }
};