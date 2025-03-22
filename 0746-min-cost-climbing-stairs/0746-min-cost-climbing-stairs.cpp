class Solution {
public:
    int find(vector<int>& arr,int ind,vector<int>&dp){


        if(ind>=arr.size()){
            return 0;
        }

        if(dp[ind]!=-1){
            return dp[ind];
        }

        int one=arr[ind]+find(arr,ind+1,dp); 
        int two=arr[ind]+find(arr,ind+2,dp);

        return dp[ind]=min(one,two);

    }


    int minCostClimbingStairs(vector<int>& arr) {


        int mini=INT_MAX;
        int n=arr.size();

        vector<int>dp(n+1,-1);

        int zero=find(arr,0,dp);
        int one=find(arr,1,dp);


        return min(zero,one);

        
    }
};