class Solution {
public:

    int helper(vector<int>&arr,int k){

        int odd=0;
        int ct=0;
        int i=0;
        int j=0;
        int n=arr.size();

        while(i<n && j<n){

            if(arr[j]%2!=0){
                odd++;
            }

            while(odd>k){
                if(arr[i]%2!=0){
                    odd--; 
                }
                i++;
            }
            ct+=j-i+1;
            j++;
        }

        return ct;
    }

    int numberOfSubarrays(vector<int>&arr, int k) {

        return helper(arr,k)-helper(arr,k-1);
        
    }
};