class Solution {
public:
    long long maximumSubarraySum(vector<int>& arr, int k) {

      int i=0;
      int j=0;
      long long sum=0;
      unordered_map<int,int>mpp;
      int n=arr.size();
      long long maxi=0;

      while(i<n && j<n){

        sum+=arr[j];
        mpp[arr[j]]++;

        if(j-i+1==k){
          if(mpp.size()==k){
            maxi=max(sum,maxi);
          }
          
          sum=sum-arr[i];
          mpp[arr[i]]--;
          if(mpp[arr[i]]==0){
            mpp.erase(arr[i]);
          }
          i++;
        }

        j++;

      }

      return maxi;
    }
};