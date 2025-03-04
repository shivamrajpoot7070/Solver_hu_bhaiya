class Solution {
public:
    bool split(vector<int>&arr,int k,int mid){

        int val=mid;
        int div=1;

        for(int i=0;i<arr.size();i++){

            if(arr[i]<=mid){
                mid=mid-arr[i];
            }
            else{
                div++;
                mid=val;
                mid-=arr[i];
            }
        }

        if(div==k){
            return true;
        }
        else if(div>k){
            return false;
        }
        else{
            return true;
        }
    }
    int splitArray(vector<int>& arr, int k) {

        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);

        int ans=-1;

        while(low<=high){

            int mid=(low+high)/2;

            if(split(arr,k,mid)){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;
        
    }
};