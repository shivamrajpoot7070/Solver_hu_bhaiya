class Solution {
public:         
    int find(string text1, string text2,vector<vector<int>>&dp,int i,int j){

        if(i<0 || j<0){
            return 0;
        }

        if(dp[i][j]!=-1){
            return dp[i][j];
        }

        if(text1[i]==text2[j]){
            return dp[i][j]=1+find(text1,text2,dp,i-1,j-1);
        }

        int first=find(text1,text2,dp,i-1,j);
        int second=find(text1,text2,dp,i,j-1);

        return dp[i][j]=max(first,second);

    }
    int longestCommonSubsequence(string text1, string text2) {

        int n=text1.length();
        int m=text2.length();
        vector<vector<int>>dp(n,vector<int>(m,-1));

        int i=n-1;
        int j=m-1;
    
        return find(text1,text2,dp,i,j);
        
    }
};