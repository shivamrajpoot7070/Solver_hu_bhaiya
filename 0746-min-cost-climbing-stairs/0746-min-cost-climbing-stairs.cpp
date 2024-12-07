class Solution {
public:
    int find(vector<int>& arr,int ind,vector<vector<int>>&dp){


        if(ind>=arr.size()){
            return 0;

        }
        
        int one=arr[ind]+find(arr,ind+1,dp); 
        int two=arr[ind]+find(arr,ind+2,dp);

        return min(one,two);

    }


    int minCostClimbingStairs(vector<int>& arr) {


        int mini=INT_MAX;
        int n=arr.size();

        vector<vector<int>>dp(n+1,vector<int>(1000,-1));

        int zero=find(arr,0,dp);
        int one=find(arr,1,dp);


        return min(zero,one);

        
    }
};