class Solution {
public:

    bool check(int half,int i,vector<int>&arr,vector<vector<int>>&dp){

        if(i>=arr.size() || half<0){
            return false;
        }

        if(half==0) return true;

        if(dp[i][half]!=-1) return dp[i][half];

        int take=check(half-arr[i],i+1,arr,dp);
        int ntake=check(half,i+1,arr,dp);

        return dp[i][half]=take || ntake;
    }


    bool canPartition(vector<int>& arr) {
        
        int sum=accumulate(arr.begin(),arr.end(),0);

        if(sum%2!=0) return false;

        int n=arr.size();

        //vector<vector<int>>dp(n+1,vector<int>(sum+1),-1);

        vector<vector<int>>dp(n+1,vector<int>(sum+1,-1));
        int half=sum/2;
        int i=0;
        return check(half,i,arr,dp);
    }
};