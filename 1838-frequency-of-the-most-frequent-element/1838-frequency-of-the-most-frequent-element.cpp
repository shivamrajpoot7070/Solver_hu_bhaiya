class Solution {
public:


    int maxFrequency(vector<int>& arr, int k) {

        int maxi=1;


        int i=0;
        int j=0;

        int n=arr.size();


        sort(arr.begin(),arr.end());
        long long currsum=0;

        while(i<n && j<n){

            currsum+=arr[j];

            long long windowsum=arr[j];

            while(i<=j && windowsum*(j-i+1)-currsum>k){
                currsum-=arr[i];
                i++;
            }

            maxi=max(maxi,j-i+1);

            j++;

        }

        return maxi;



        
    }
};