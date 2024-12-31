class Solution {
public:
    int find(int i, vector<int>& costs, int n, vector<int>& days, vector<int>& dp) {
        if (i >= n) {
            return 0;
        }

        if (dp[i] != -1) {
            return dp[i];
        }

        // Calculate cost for 1-day pass
        int oneDay = costs[0] + find(i + 1, costs, n, days, dp);

        // Calculate cost for 7-day pass
        int j = i;
        while (j < n && days[j] < days[i] + 7) {  // 7 days pass lene par kha tk jyga travel krne wai le ja rhe
            j++;
        }
        int sevenDay = costs[1] + find(j, costs, n, days, dp);

        // Calculate cost for 30-day pass
        j = i;
        while (j < n && days[j] < days[i] + 30) {
            j++;
        }
        int thirtyDay = costs[2] + find(j, costs, n, days, dp);

        dp[i] = min(oneDay, min(sevenDay, thirtyDay));
        return dp[i];
    }

    int mincostTickets(vector<int>& days, vector<int>& costs) {
        int n = days.size();
        vector<int> dp(n, -1); // Memoization array
        return find(0, costs, n, days, dp);
    }
};
