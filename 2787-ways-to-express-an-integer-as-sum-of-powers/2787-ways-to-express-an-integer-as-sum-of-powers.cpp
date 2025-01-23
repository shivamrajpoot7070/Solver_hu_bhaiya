class Solution {
public:

const int mod=1e9+7;
int powerSum(int i, int sum,int n, int x,vector<vector<int>>&dp) {
    // Base case: If the remaining sum is negative or the current power exceeds x, no valid combinations exist

    if (sum == n) {
        return 1;
    }

    if (i>n  || sum > n) {
        return 0;
    }

    if(dp[i][sum]!=-1){
        return dp[i][sum];
    }

    // Base case: If the remaining sum is exactly 0, we've found a valid combinatio
    // Recursive cases: Include or exclude the current number
    long long p = pow(i, x);
    int take = powerSum(i + 1, sum+p,n, x,dp)%mod; // Include the current number
    int ntake = powerSum(i + 1, sum,n, x,dp)%mod;   // Exclude the current number

    // Total combinations
    return dp[i][sum]=take + ntake;
}
    int numberOfWays(int n, int x) {

        int sum=0;

        vector<vector<int>>dp(n+1,vector<int>(n+1,-1));
       
        return powerSum(1,sum,n,x,dp);
        
    }
};