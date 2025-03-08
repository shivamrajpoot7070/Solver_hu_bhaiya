class Solution {
public:

    vector<int> productExceptSelf(vector<int>& nums) {

       int n=nums.size();

      vector<int>arr(n);
      vector<int>arr1(n);

      vector<int>v;

      arr[0]=1;
      arr1[n-1]=1;


      for(int i=1;i<n;i++){
        arr[i]=arr[i-1]*nums[i-1];
      }

      for(int i=n-2;i>=0;i--){
        arr1[i]=arr1[i+1]*nums[i+1];
      }

      for(int i=0;i<n;i++){
        v.push_back(arr[i]*arr1[i]);
      }

      return v;
        
    }
};