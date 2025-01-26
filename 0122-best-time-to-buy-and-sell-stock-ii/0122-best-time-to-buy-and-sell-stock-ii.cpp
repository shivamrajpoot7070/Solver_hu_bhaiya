class Solution {
public:
    int maxProfit(vector<int>& arr) {
        
        int maxi=0;
        int inc=arr[0];

        int sum=0;
        int i=0;
        int j=0;

        int n=arr.size();

        while(i<n && j<n){

            if(arr[j]>=inc){
                maxi=max(maxi,arr[j]-arr[i]);
                inc=arr[j];
                j++;
            }

            else{
                sum+=maxi;
                maxi=0;
                inc=arr[j];
                i=j;
            }
        }

        return sum+maxi;

    }
};