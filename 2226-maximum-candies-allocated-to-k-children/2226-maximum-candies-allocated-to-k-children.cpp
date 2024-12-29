class Solution {
public:

    bool check(vector<int>& arr, long long k,int mid){

        int ct=0;

        for(int i=0;i<arr.size();i++){

            ct+=arr[i]/mid;
        
        }

        return ct>=k;

    }


    int maximumCandies(vector<int>& arr, long long k) {


        long long sum=0;
        long long maxi=-1;
        int ans;

        for(int i=0;i<arr.size();i++){

            sum+=arr[i];

            if(arr[i]>maxi){
                maxi=arr[i];
            }

            //maxi=max(maxi,arr[i]);

        }

        if(sum<k){
            return 0;
        }


        int low=1;
        int high=maxi;


        while(low<=high){

            int mid=(low+high)/2;

            if(check(arr,k,mid)){
                ans=mid;
                low=mid+1;
            }

            else{
                high=mid-1;
            }
        }

        return ans;





    }
};