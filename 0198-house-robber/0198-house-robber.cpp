class Solution {
public:

    int b(vector<int>& arr,int i,vector<int>&dp){

        if(i>=arr.size()){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }


        int chori=arr[i]+b(arr,i+2,dp);

        int notchori=b(arr,i+1,dp);

        return dp[i]=max(chori,notchori);
    }


    int rob(vector<int>& arr) {

        int n=arr.size();

        vector<int>dp(n+1,-1);

        return b(arr,0,dp);
        
    }
};