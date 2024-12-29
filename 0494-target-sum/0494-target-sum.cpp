class Solution {
public:

//    int dp[1000][1000];

    int find(vector<int>& arr, int tar,int i){

        if(i==arr.size()){
            if(tar==0){
                return 1;
            }
            return 0;
        }

        // if(tar==0){
        //     return 1;
        // }


        // if(dp[i][tar]!=-1 && tar>0){
        //     return dp[i][tar];
        // }

        // ye base case ni hoga qki + - hai na to keh nai skte kha tar<0 hai qki aagr
        // jake bdh bhi skta hai

        // if(tar==0){
        //     return 1;
        // }

        // if(tar<0){
        //     return 0;
        // }

        int pos=find(arr,tar-arr[i],i+1);
        int neg=find(arr,tar+arr[i],i+1);

        // if(tar>=0){
        //     return dp[i][tar]=pos+neg;
        // 
        

        return pos+neg;

    }


    int findTargetSumWays(vector<int>& arr, int tar) {

        int i=0;
        int n=arr.size();

        // vector<vector<int>>dp(n,vector<int>(tar,-1));

        return find(arr,tar,i);
  
        
    }
};