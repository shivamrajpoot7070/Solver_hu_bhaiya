class Solution {
public:

    int find(int i,int j,int m,int n,vector<vector<int>>&dp){



        if(i==m-1 && j==n-1){
            return 1;
        }


        if(i>=m || j>=n){
            return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }


        int down=find(i+1,j,m,n,dp);
        int right=find(i,j+1,m,n,dp);


        return dp[i][j]=down+right;

    }


    int uniquePaths(int m, int n) {


        int i=0;
        int j=0;

        vector<vector<int>>dp(m,vector<int>(n,-1));

        return find(i,j,m,n,dp);
        
    }
};