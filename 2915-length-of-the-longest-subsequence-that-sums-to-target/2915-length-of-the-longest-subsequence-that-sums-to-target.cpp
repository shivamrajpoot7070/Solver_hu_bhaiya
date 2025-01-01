class Solution {
public:

    int find(vector<int>& arr, int tar,int i,vector<vector<int>>&dp){

        if(i>=arr.size()){

            if(tar==0){
                return 1;
            }

            return INT_MIN;
        }

         if(tar==0){
            return 1;
         }

         if(tar<0){
            return INT_MIN;
         }


         if(dp[i][tar]!=-1){
            return dp[i][tar];
         }

         int take=1+find(arr,tar-arr[i],i+1,dp);
         int ntake=find(arr,tar,i+1,dp);

         return dp[i][tar]=max(take,ntake);


    }    



    int lengthOfLongestSubsequence(vector<int>& arr, int tar) {

        int i=0;
        int n=arr.size();
        vector<vector<int>>dp(n,vector<int>(tar+1,-1));
        int ret=find(arr,tar,i,dp);

        if(ret<0){
            return -1;
        }
        return ret-1;
    }
};