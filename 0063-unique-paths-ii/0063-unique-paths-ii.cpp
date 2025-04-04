class Solution {
public:

    int count(vector<vector<int>>& arr,int i,int j,vector<vector<int>>& dp){

        if(i>=arr.size() || j>=arr[i].size()){
            return 0;
        }

        if(arr[i][j]==1) return 0;



        if(i==arr.size()-1 && j==arr[0].size()-1){
            if(arr[i][j]==0) return 1;
            return 0;
        }

        if(dp[i][j]!=-1) return dp[i][j];

        int down=count(arr,i+1,j,dp);
        int right=count(arr,i,j+1,dp);

        return dp[i][j]=down+right;
    }
    int uniquePathsWithObstacles(vector<vector<int>>& arr) {


        int n=arr.size();
        int m=arr[0].size();

        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));

        return count(arr,0,0,dp);
    }
};