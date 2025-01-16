class Solution {
public:

    long long find(long long st,long long n,long long limit,vector<vector<long long>>&dp){

        if(n==0){
            return 0;
        }

        if(n<0){
            return INT_MAX;
        }

        if(st>limit){
            return INT_MAX;
        }

        if(dp[st][n]!=-1){
            return dp[st][n];
        }

        long long sq=sqrt(st);

        long long take=INT_MAX;

        if(sq*sq==st){
            take=1+find(st,n-st,limit,dp);
        }

        long long nt=INT_MAX;
        
        nt=find(st+1,n,limit,dp);

        return dp[st][n]=min(take,nt);

    }

    int numSquares(int n) {

        long long st=1;
        long long limit=n;
        vector<vector<long long>>dp(n+1,vector<long long>(n+1,-1));
        return find(st,n,limit,dp);
        
    }
};