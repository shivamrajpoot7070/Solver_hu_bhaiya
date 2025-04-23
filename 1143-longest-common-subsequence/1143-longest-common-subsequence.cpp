// class Solution {
// public:         
//     int find(string text1, string text2,int i,int j,vector<vector<int>>&dp){

//         if(i<0 || j<0){
//             return 0;
//         }

//         if(dp[i][j]!=-1){
//             return dp[i][j];
//         }

//         if(text1[i]==text2[j]){
//             return 1+find(text1,text2,i-1,j-1,dp);
//         }

//         int first=find(text1,text2,i-1,j,dp);
//         int second=find(text1,text2,i,j-1,dp);

//         return dp[i][j]=max(first,second);

//     }
//     int longestCommonSubsequence(string text1, string text2) {

//         int n1=text1.length();
//         int n2=text2.length();
//         vector<vector<int>>dp(n1,vector<int>(n2,-1));

    
//         return find(text1,text2,n1-1,n2-1,dp);
        
//     }
// };

class Solution {
    int solve(int index1,int index2,string &text1,string &text2,vector<vector<int>> &dp){
        if(index1<0 || index2<0){
            return 0;
        }
        if(dp[index1][index2]!=-1){
            return dp[index1][index2];
        }
        if(text1[index1]==text2[index2]){
            return 1+solve(index1-1,index2-1,text1,text2,dp);
        }
        int moveFirst=solve(index1-1,index2,text1,text2,dp);
        int moveSecond=solve(index1,index2-1,text1,text2,dp);
        return dp[index1][index2]=max(moveFirst,moveSecond);
    }
public:
    int longestCommonSubsequence(string text1, string text2) {
        int n1=text1.size();
        int n2=text2.size();
        vector<vector<int>> dp(n1,vector<int>(n2,-1));
        return solve(n1-1,n2-1,text1,text2,dp);
    }
};