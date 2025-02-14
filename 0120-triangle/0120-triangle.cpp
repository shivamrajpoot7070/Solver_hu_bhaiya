class Solution {
public:

    int find(vector<vector<int>>&arr,int n,int i,int j,vector<vector<int>>&dp){


        if(i==n-1 || j==n-1){
            return arr[i][j];
        }

        if(dp[i][j]!=-1){

            return dp[i][j];
        }

        int down=arr[i][j]+find(arr,n,i+1,j,dp);
        int diagonal=arr[i][j]+find(arr,n,i+1,j+1,dp);

        return dp[i][j]=min(down,diagonal);


    }


    int minimumTotal(vector<vector<int>>&arr) {

        int n=arr.size();
        vector<vector<int>> dp(n,vector<int>(n, -1));
        return find(arr,n,0,0,dp);


    }
};