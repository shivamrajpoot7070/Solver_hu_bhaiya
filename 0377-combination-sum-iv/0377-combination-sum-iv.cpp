class Solution {
public:

    // int find(vector<int>&arr,vector<vector<int>>&dp,int tar,int i){

    //     if(tar==0){
    //         return 1;
    //     }
    //     if(i>=arr.size()){
    //         return 0;
    //     }

    //     if(tar<0){
    //         return 0;
    //     }

    //     if(dp[i][tar]!=-1){
    //         return dp[i][tar];
    //     }

    //     int take=find(arr,dp,tar-arr[i],i);

    //     int ntake=find(arr,dp,tar,i+1);

    //     return dp[i][tar]=(take+ntake);

    // }

    int find(vector<int>&arr, int tar,int i,vector<vector<int>>&dp){

        if(tar==0){
            return 1;
        }

        if(i>=arr.size() || tar<0){
            return 0;
        }

        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }
        
        int take=find(arr,tar-arr[i],0,dp);
        int ntake=find(arr,tar,i+1,dp);


        return dp[i][tar]=take+ntake;


    }


    int combinationSum4(vector<int>&arr, int tar) {

        int n=arr.size();

        vector<vector<int>>dp(n+1,vector<int>(tar+1,-1));

        int ct=0;

        return find(arr,tar,0,dp);

       //return ct;
        
    }
};