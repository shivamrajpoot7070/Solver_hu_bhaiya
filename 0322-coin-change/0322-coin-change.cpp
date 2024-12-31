class Solution {
public:
    long long find(vector<int>&arr, int amount,int i,vector<vector<int>>&dp){


        if(i>=arr.size()){

            if(amount==0){
                return 1;
            }
            return INT_MAX;  // agr out of range
        }


        if(amount==0){
            return 1;   // mil gya to 1
        }

        if(amount<0){
            return INT_MAX;
        }


        if(dp[i][amount]!=-1){
            return dp[i][amount];
        }

        long long take=1+find(arr,amount-arr[i],i,dp);
        long long nott=find(arr,amount,i+1,dp);

        return dp[i][amount]=min(take,nott);


    }

    int coinChange(vector<int>&arr, int amount) {
        int i=0;
        int n=arr.size();

        vector<vector<int>>dp(n,vector<int>(amount+1,-1));
        long long val=find(arr,amount,i,dp);
        if(val==INT_MAX){
            return -1;
        }
        return val-1;
        
    }
};