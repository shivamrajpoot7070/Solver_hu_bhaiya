class Solution {
public:
    int dp[1001][1001];

    // int lcs(int n, int m, string &s1, string &s2) {
    //     if(n == 0 || m == 0) return 0;

    //     if(dp[n][m] != -1) return dp[n][m];

    //     if(s1[n - 1] == s2[m - 1]) {
    //         return dp[n][m] = 1 + lcs(n - 1, m - 1, s1, s2);
    //     }

    //     return dp[n][m] = max(lcs(n - 1, m, s1, s2), lcs(n, m - 1, s1, s2));
    // }

    int longestCommonSubsequence(string s1, string s2) {

        int n = s1.length();
        int m = s2.length();
        memset(dp, -1, sizeof(dp));

        for(int i=0;i<n+1;i++){
            for(int j=0;j<m+1;j++){
                if(i==0 || j==0){
                    dp[i][j]=0;
                }
            }
        }


        for(int i=1;i<n+1;i++){
            for(int j=1;j<m+1;j++){
                if(s1[i-1]==s2[j-1]){
                    dp[i][j]=1+dp[i-1][j-1];
                }
                else{
                    dp[i][j]=max(dp[i][j-1],dp[i-1][j]);
                }
            }
        }
        return dp[n][m];
    }
};
