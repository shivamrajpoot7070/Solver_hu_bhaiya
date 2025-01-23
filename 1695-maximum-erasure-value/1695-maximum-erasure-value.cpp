class Solution {
public:
    int maximumUniqueSubarray(vector<int>& arr) {

        int i=0;
        int sum=0;
        int j=0;
        int n=arr.size();



        int maxi=INT_MIN;
        unordered_map<int,int>mpp;

        while(i<n && j<n){

            mpp[arr[j]]++;
            sum+=arr[j];

        if(mpp[arr[j]]>1){

           while(mpp[arr[j]]>1){
              sum-=arr[i];
              mpp[arr[i]]--;

              if(mpp[arr[i]]==0){
                mpp.erase(arr[i]);
              }
             // maxi=max(sum,maxi);
              i++;
           }
           j++;
        }
        else{
           maxi=max(maxi,sum);
           j++;
        }
    }


        return maxi;
        
        
    }
};