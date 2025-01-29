class Solution {
public:
    int subarraySum(vector<int>&arr, int k) {

      int n=arr.size();
      int sum=0;
      int i=0;
      int j=0;
      int ct=0;

    map<int,int>mpp;

    mpp.insert({0,1});

      for(int i=0;i<n;i++){

        sum+=arr[i];

        if(mpp.find(sum-k)!=mpp.end()){
          ct+=mpp[sum-k];
        }

        mpp[sum]++;
      }

      return ct;

     
        
    }
};