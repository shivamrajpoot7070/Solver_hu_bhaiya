class Solution {
public:
    int maximumBeauty(vector<int>& arr, int k) {

       sort(arr.begin(),arr.end());

        int i=0;
        int j=0;
        int n=arr.size();
        int len=0;
        int maxi=0;

        while(j<n){

            int val=(arr[j]-arr[i]);

            if(val<=2*k){
                len=j-i+1;
                maxi=max(maxi,len);
                j++;
            }
            else{
                i++;
            }
        }

        return maxi;
    }
};