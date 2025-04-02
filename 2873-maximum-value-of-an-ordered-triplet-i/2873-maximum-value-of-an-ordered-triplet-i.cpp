class Solution {
public:
    long long maximumTripletValue(vector<int>& arr) {
        
        long long  maxi=0;

        int i=0;
        int j=0;
        int n=arr.size();

        while(i<n-2){
              
              int j=i+1;

              while(j<n-1){
                 
                 int k=j+1;

                 while(k<n){
                    long long val=(long long)(arr[i]-arr[j])*arr[k];
                    k++;
                    maxi=max(maxi,val);
                 }
                 j++;
              }
              i++;
        }

        return maxi;
    }
};