class Solution {
public:

    bool func(vector<int>& arr,int ind,int tar,bool &flag,vector<vector<int>>&dp){


        if(ind>=arr.size() || tar<0){
            return false;
        }

        if(tar==0){
            return true;
        }

        if(dp[ind][tar]!=-1){
            return dp[ind][tar];
        }

        bool take=false;
        if(tar>=arr[ind]){
           take=func(arr,ind+1,tar-arr[ind],flag,dp);
        }
        bool ntake=func(arr,ind+1,tar,flag,dp);

        return dp[ind][tar]=take || ntake;

    }

    bool canPartition(vector<int>& arr) {


      int sum=0;

       for(int i=0;i<arr.size();i++){
           sum+=arr[i];
       }

       int n=arr.size();

        bool flag=false;
        int ind=0;

         if(sum%2!=0){
            return false;
         }

         sum=sum/2;


        vector<vector<int>>dp(n,vector<int>(sum+1,-1));
        
        return func(arr,ind,sum,flag,dp);

        //return flag;
 
    }
};