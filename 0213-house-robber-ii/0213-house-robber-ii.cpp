class Solution {
public:

    int find(vector<int>& arr,int i,vector<int>&dp){

        if(i>=arr.size()){
            return 0;
        }

        if(dp[i]!=-1){
            return dp[i];
        }

        int chori=arr[i]+find(arr,i+2,dp);

        int not_chori=find(arr,i+1,dp);

        return dp[i]=max(chori,not_chori);

    }



    int rob(vector<int>& nums) {

        if(nums.size()==1){
            return nums[0];
        }

        vector<int> arr1(nums.begin(), nums.end() - 1);  // last element ko chorke
        vector<int> arr2(nums.begin() + 1, nums.end());  // fist ko chorke
 
        vector<int>dp(arr1.size(),-1);
        vector<int>dp1(arr2.size(),-1);

        int i=0;
        return max (find(arr1,0,dp),find(arr2,0,dp1));
    }
};