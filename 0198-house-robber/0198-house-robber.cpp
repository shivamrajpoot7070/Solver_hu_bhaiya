class Solution {
public:

    int chori(vector<int>& arr,int ind,vector<int>&dp){

        if(ind>=arr.size()){
            return 0;
        }

        if(dp[ind]!=-1){
            return dp[ind];
        }
        
        int krochori=arr[ind]+chori(arr,ind+2,dp);
        
        int mtkro=chori(arr,ind+1,dp);

        return dp[ind]=max(krochori,mtkro);


    }


    int rob(vector<int>& arr) {

        int n=arr.size();

        vector<int>dp(n+1,-1);
        int ind=0;

        return chori(arr,ind,dp);


      
        
    }
};