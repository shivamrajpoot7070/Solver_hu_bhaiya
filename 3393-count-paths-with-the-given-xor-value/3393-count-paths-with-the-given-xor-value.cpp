class Solution {
public:

int MOD = 1e9 + 7;

int dp[301][301][17];

    int count(vector<vector<int>>& arr,int i,int j,int xo,int k){


        if(i>=arr.size() || j>=arr[0].size()){
            return 0;
        }

        if(i==arr.size()-1 && j==arr[0].size()-1){

            xo^=arr[i][j];

            if(xo==k){
                return 1;
            }

            return 0;
        }

        if(dp[i][j][xo]!=-1){
            return dp[i][j][xo];
        }

        int newxo=xo^arr[i][j];  // updated xor

        int down=count(arr,i+1,j,newxo,k)%MOD;

        int right=count(arr,i,j+1,newxo,k)%MOD;

        return dp[i][j][xo]=(down+right)%MOD;

    }
    int countPathsWithXorValue(vector<vector<int>>& arr, int k) {

        int n=arr.size();
        int m=arr[0].size();

    //    vector<vector<vector<int>>> dp(n, vector<vector<int>>(m+1, vector<int>(1025, -1)));
        memset(dp,-1,sizeof(dp));
        int xo=0;
        int i=0;
        int j=0;

        return count(arr,i,j,xo,k);

    }
};