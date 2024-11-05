class Solution {
public: 
    

    int solve(int n,vector<int>&dp){

        if(n<=1){
            return n;
        }


        if(dp[n]==-1){  // if not solved
           return dp[n]=solve(n-1,dp)+solve(n-2,dp);
        }

        else{  // if subproblem is solved
            return dp[n];
        }


    }


    int fib(int n) {

        vector<int>dp(n+1,-1);

        return solve(n,dp);
        
    }
};