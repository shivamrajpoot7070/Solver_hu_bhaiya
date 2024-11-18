class Solution {
public:
    vector<int> decrypt(vector<int>& arr, int k) {

      int n=arr.size();
    
      if(k>0){

        int win=k+1;
        int sum=0;
        vector<int>ans(n);
        
        int i=0;
        int j=0;

        while(i<n){

          sum+=arr[j%n];

          if(abs(j-i+1)==win){

            ans[i]=sum-arr[i];

            sum=sum-arr[i];

            i++;
          }
          j++;
        }

        return ans;
      }

      if(k<0){

        int i=0;
        int j=0;

        reverse(arr.begin(),arr.end());

        int si=-1*k;

        int win=si+1;
        int sum=0;
        vector<int>ans(n);

        while(i<n){
          sum+=arr[j%n];

          if(abs(j-i+1)==win){

            ans[i]=sum-arr[i];

            sum=sum-arr[i];

            i++;
          }
          j++;
        }

        reverse(ans.begin(),ans.end());

        return ans;

      }

      vector<int>ans;


      for(int i=0;i<arr.size();i++){

        ans.push_back(0);

      }

      return ans;
        
    }
};