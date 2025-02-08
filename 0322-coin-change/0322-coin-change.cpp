class Solution {
public:


    int find(vector<int>&arr,int i,int amt,vector<vector<int>>&dp){
 
        if(i>=arr.size() || amt<0){
            return 1e9;
        }

        if(amt==0){
            return 0;
        }

        if(dp[i][amt]!=-1){
            return dp[i][amt];
        }

        int take=1+find(arr,i,amt-arr[i],dp);

        int ntake=find(arr,i+1,amt,dp);

        return dp[i][amt]=min(take,ntake);

    }
    
    int coinChange(vector<int>& arr, int amt) {

        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(amt+1,-1));
        int i=0;


        if(find(arr,i,amt,dp)==1e9){
            return -1;
        }

        return find(arr,i,amt,dp);

    }
};