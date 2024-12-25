class Solution {
public:
    int longestMountain(vector<int>& arr) {

        int len=INT_MIN;

        if(arr.size()<3){
            return 0;
        }

        for(int i=1;i<arr.size()-1;i++){


            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){

            int mini=arr[i];
            int maxi=arr[i];

            int j=i-1;
            int r=i+1;

           while(j>=0 && arr[j]<mini){
            mini=arr[j];
            j--;
           }

           while(r<arr.size() && arr[r]<maxi){
            maxi=arr[r];
            r++;
           }

           j++;
           r--;


           len=max(len,r-j+1);

            }
 
        }

        if(len==1 || len==INT_MIN){
            return 0;
        }

        return len;
        
    }
};