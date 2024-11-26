class Solution {
public:

    int kadanemax(vector<int>& arr) {
        int maxi = arr[0];
        int sum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            sum = max(arr[i], sum + arr[i]);
            maxi = max(maxi, sum);
        }
        return maxi;
    }

    // Function to find the minimum subarray sum using Kadane's algorithm
    int kadanemin(vector<int>& arr) {
        int mini = arr[0];
        int sum = arr[0];
        for (int i = 1; i < arr.size(); i++) {
            sum = min(arr[i], sum + arr[i]);
            mini = min(mini, sum);
        }
        return mini;
    }


    int maxSubarraySumCircular(vector<int>& arr) {

        // int size=arr.size();

        // int maxi=*max_element(arr.begin(),arr.end());
        // int largest=*max_element(arr.begin(),arr.end());

        // for(int i=0;i<arr.size();i++){

        //     int n=size;
        //     int j=i;
        //     int sum=0;
        //     while(n--){

        //         sum+=arr[j%size];
        //         if(sum<0){
        //             sum=0;
        //         }
        //         maxi=max(maxi,sum);
        //         j++;
        //     }

        // }

        // if(maxi==0){
        //     return largest;
        // }

        // return maxi;


        int tsum=accumulate(arr.begin(),arr.end(),0);

        int maxsum=kadanemax(arr);

        int minsum=kadanemin(arr);


        int circlesum=tsum-minsum;


        if(maxsum>0){
            return max(circlesum,maxsum);
        }

        return maxsum;

        
    }
};