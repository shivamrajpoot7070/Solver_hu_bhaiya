class Solution {
public:

    void combo(vector<vector<int>>&ans,vector<int>v,vector<int>arr,int tar,int idx){

      // if(target<0){
      //   return;
      // }

      // if(target==0){
      //   ans.push_back(v);
      // }


      // for(int i=idx;i<arr.size();i++){
      //   v.push_back(arr[i]);
      //   combo(ans,v,arr,target-arr[i],i);
      //   v.pop_back();

      // }


      

        if(tar==0){
          ans.push_back(v);
          return;
        }

        if(idx==arr.size() || tar<0){
        return;
      }

        
      

      // pick call  .. isme idx nai bdhega har possible duplicate sum check krna hai j
      // jyse hi jyda ho jaye tbhi non pick call kr do

      if(arr[idx]<=tar){
        v.push_back(arr[idx]);
        combo(ans,v,arr,tar-arr[idx],idx);
        v.pop_back();
      }

      // not pick call

      combo(ans,v,arr,tar,idx+1);
    }

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

      vector<vector<int>>ans;
      int idx=0;
      vector<int>v;

      combo(ans,v,candidates,target,idx);

      return ans;
        
    }
};