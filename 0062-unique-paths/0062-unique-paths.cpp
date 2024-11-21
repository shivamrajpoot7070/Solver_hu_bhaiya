class Solution {
public: 

    int maze(int down,int right,int m,int n,vector<vector<int>>&dp){


      if(down==m-1 || right==n-1){
        return 1;
      }

      if(down>=m || right>=n){
        return 0;
      }

      if(dp[down][right]!=-1){
        return dp[down][right];
      }

      

      

      int ryt=maze(down,right+1,m,n,dp);
      int dow=maze(down+1,right,m,n,dp);

      int ct=ryt+dow;

      return dp[down][right]=ct;

    }




    int uniquePaths(int m, int n) {

      int down=0;
      int right=0;

      int ct=0;
      vector<vector<int>>dp(m,vector<int>(n,-1));


      return maze(down,right,m,n,dp);


        
    }
};