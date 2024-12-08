class Solution {
public:   


    int steps(int n,int idx,vector<int>&dp){


        if(idx>n){
            return 0;
        }
        if(idx==n){
            return 1;
        }

        if(dp[idx]!=-1){
            return dp[idx];
        }

        int one=steps(n,idx+1,dp);
        int two=steps(n,idx+2,dp);

        return dp[idx]=one+two;
    }

    int climbStairs(int n) {

        vector<int>dp(n+1,-1);

        int idx=1;
        return steps(n,0,dp);

    }
};