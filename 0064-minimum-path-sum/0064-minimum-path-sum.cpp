class Solution {
public:
    long long summ(int i,int j,vector<vector<int>>& arr,vector<vector<int>>& dp){

        if(i>=arr.size() || j>=arr[0].size()){
            return INT_MAX;
        }

        if(i==arr.size()-1 && j==arr[i].size()-1){
            return arr[i][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }


        long long down=arr[i][j]+summ(i+1,j,arr,dp);
        long long right=arr[i][j]+summ(i,j+1,arr,dp);

        return dp[i][j]=min(down,right);
    }
    int minPathSum(vector<vector<int>>& arr) {
        int i=0;
        int j=0;
        int n=arr.size();
        int m=arr[0].size();

        vector<vector<int>>dp(n+1,vector<int>(m+1,-1));
        return summ(i,j,arr,dp);
        
    }
};