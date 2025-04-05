class Solution {
public:
    long long minisum(int i,int j,vector<vector<int>>&arr,vector<vector<int>>&dp){

        if(i>=arr.size() || j>=arr[i].size()){
            return 0;
        }

        if(i==arr.size()){
            return arr[i][j];
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        long long same=arr[i][j]+minisum(i+1,j,arr,dp);

        long long next=arr[i][j]+minisum(i+1,j+1,arr,dp);

        return dp[i][j]=min(same,next);
    }
    int minimumTotal(vector<vector<int>>& arr) {
        
        int i=0;
        int j=0;

        int n=arr.size();
        int m=arr[0].size();

        vector<vector<int>>dp(201,vector<int>(201,-1));

        return minisum(i,j,arr,dp);
    }
};