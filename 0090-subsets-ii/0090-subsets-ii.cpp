class Solution {
public:

     void f(vector<vector<int>>&ans,vector<int>v,vector<int>& arr,int i){

      if(i==arr.size()){
        ans.push_back(v);
        return;
      }

      v.push_back(arr[i]);
      f(ans,v,arr,i+1);

      v.pop_back();

      while(i+1 < arr.size() && arr[i]==arr[i+1]) i++;

      f(ans,v,arr,i+1);

     }



    vector<vector<int>> subsetsWithDup(vector<int>& arr) {

      sort(arr.begin(),arr.end());

        vector<vector<int>>ans;
        vector<int>v;
        int i=0;

        f(ans,v,arr,i);

        return ans;
    }
};