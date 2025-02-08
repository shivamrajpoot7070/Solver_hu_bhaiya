class Solution {
public:

    bool find(vector<int>& arr,int tar,int i,vector<vector<int>>&dp){

        if(i>=arr.size() || tar<0){
            return false;
        }

        if(i==arr.size()){
            if(tar==0){
                return true;
            }
            return false;
        }

        if(tar==0){
            return true;
        }

        if(dp[i][tar]!=-1){
            return dp[i][tar];
        }

        bool take=find(arr,tar-arr[i],i+1,dp);

        bool ntake=find(arr,tar,i+1,dp);


        return dp[i][tar]=take || ntake;


    }

    bool canPartition(vector<int>& arr) {


        int n=arr.size();

        int sum=accumulate(arr.begin(),arr.end(),0);

        int tar;

        if(sum%2!=0){
            return false;
        }

        tar=sum/2;

        vector<vector<int>>dp(n+1,vector<int>(tar+1,-1));

        return find(arr,tar,0,dp);
    }
};