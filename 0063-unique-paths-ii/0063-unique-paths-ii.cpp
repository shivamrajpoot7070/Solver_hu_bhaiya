class Solution {
public:

    int find(int down,int right,int n,int m,vector<vector<int>>& obst,vector<vector<int>>& dp){

        if(down>=n || right>=m){
            return 0;
        }
        
        if(down<n && right<m && obst[down][right]==1){
            return 0;
        }

        if(down==n-1 && right==m-1 && obst[down][right]!=1){
            return 1;
        }

        if(dp[down][right]!=-1){
            return dp[down][right];
        }

        
        

            int dow=find(down+1,right,n,m,obst,dp);
            int ryt=find(down,right+1,n,m,obst,dp);

            int ct=dow+ryt;
            
            return dp[down][right]=ct;
        

        //return dp[down][right];

    }


    int uniquePathsWithObstacles(vector<vector<int>>& obst) {

        int n=obst.size();
        int m=obst[0].size();

        int down=0;
        int right=0;

        vector<vector<int>>dp(m,vector<int>(n,-1));

        return find(down,right,n,m,obst,dp);


        
    }
};