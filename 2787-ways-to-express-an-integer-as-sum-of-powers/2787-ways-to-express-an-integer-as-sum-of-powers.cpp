class Solution {
public:

int mod = 1e9 + 7;
vector<vector<int>>dp;


    long find(int ind,long n,int x){

        if(n==0){
            return 1;
        }

        if(n<0 || ind>n){
            return 0;
        }

        if(dp[ind][n]!=-1){
            return dp[ind][n];
        }

        // long p=1;

        // for(int i=0;i<x;i++){
        //     p=p*ind;
        // }

        long  p=pow(ind,x);

        long take=find(ind+1,n-p,x);

        long ntake=find(ind+1,n,x);


        return dp[ind][n]=((take+ntake)%mod);

    }

    int numberOfWays(int n, int x) {


        // int currsum=0;
         int currnum=1;

        dp.resize(n + 1, vector<int>(n + 1, -1));


        return find(currnum,n,x);


        
    }
};