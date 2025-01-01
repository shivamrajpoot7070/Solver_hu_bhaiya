class Solution {
public:
    int find(int tar, vector<int>& arr,int i,vector<vector<int>>&dp){


        if(i>=arr.size()){
            if(tar==0){
                return 1;
            }

            return 0;
        }


        if(tar==0){
            return 1;
        }

        if(tar<0){
            return 0;
        }


        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }


        int take=find(tar-arr[i],arr,i,dp);
        int ntake=find(tar,arr,i+1,dp);


        return dp[i][tar]=take+ntake;


    }

    int change(int tar, vector<int>& arr) {

        int i=0;
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));

        return find(tar,arr,i,dp);



    }
};