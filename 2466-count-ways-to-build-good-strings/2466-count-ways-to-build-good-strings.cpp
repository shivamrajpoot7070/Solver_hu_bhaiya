class Solution {
public:

  const int MOD = 1e9 + 7;

    int calc(int low, int high, int zero, int one,int len,vector<int>&dp){

        if(len>high){
            return 0;
        }

        if(dp[len]!=-1){
            return dp[len];
        }

        int addone=len>=low?1:0;

        int ze=calc(low,high,zero,one,len+zero,dp);

        int o= calc(low,high,zero,one,len+one,dp);


        return dp[len]=(addone+ze+o)%MOD;

    }


    int countGoodStrings(int low, int high, int zero, int one) {

        vector<int> dp(high + 1, -1);

       return calc(low,high,zero,one,0,dp);


    }
};