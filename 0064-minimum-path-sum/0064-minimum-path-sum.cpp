class Solution {
public:
    int find(vector<vector<int>>&arr,int i,int j,vector<vector<int>>&dp){

        if(i==arr.size()-1 && j==arr[0].size()-1){
            return arr[i][j];
        }

        if(i>=arr.size() || j>=arr[0].size()){
            return 1e9;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        int down=arr[i][j]+find(arr,i+1,j,dp);
        int right=arr[i][j]+find(arr,i,j+1,dp);

        dp[i][j]=min(down,right);


        return dp[i][j];

    }
    int minPathSum(vector<vector<int>>& arr) {

        int m=arr.size();
        int n=arr[0].size();
        int i=0;
        int j=0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return find(arr,i,j,dp);
    }
};