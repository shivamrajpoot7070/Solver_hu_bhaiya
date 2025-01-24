class Solution {
public:

    int divide(vector<int>& arr, int k,int mid){

        int val=mid;

        int ct=1;


        for(int i=0;i<arr.size();i++){

            if(arr[i]<=val){
                val=val-arr[i];
            }

            else{
                ct++;
                val=mid;
                val=val-arr[i];
            }
        }

        return ct;
    }


    int splitArray(vector<int>& arr, int k) {

        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);


        int ans=low;

        while(low<=high){

            int mid=(low+high)/2;

            if(divide(arr,k,mid)>k){  // jo sum hai wo bhot chota hai isly k me divide nai hua jyda lgg gya
                low=mid+1;
            }

            else{
                ans=mid;
                high=mid-1;
            }
        }

        return ans;

    }
};