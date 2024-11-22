class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

      // check notes

      map<int,int>mpp;
      for(int i=0;i<arr.size();i++){
        mpp[arr[i]]=i;
      }

      for(int i=0;i<arr.size();i++){

        int diff=(target-arr[i]);

        if(mpp.find(diff)!=mpp.end() && mpp[diff]!=i){
          int ind=mpp[diff];
          return {i,ind};
        }
      }

      return {-1,-1};
   
    }
};