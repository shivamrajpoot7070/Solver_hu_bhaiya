class Solution {
public:

    long long check(int mid,vector<int>&arr){

        long long hrs=0;

        for(int i=0;i<arr.size();i++){

            if(arr[i]<=mid){
                hrs+=1;
            }
            else{

                if((arr[i]%mid)==0){
                    hrs+=arr[i]/mid;
                }
                else{
                hrs+=(arr[i]/mid)+1;
                }
            }
        }
        return hrs;
    }
    int minEatingSpeed(vector<int>& arr, int h) {

        long long low=1;
        long long high=*max_element(arr.begin(),arr.end());

        int k=-1;

        while(low<=high){

            long long mid=low+(high-low)/2;

            if(check(mid,arr)<=h){
                k=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return k;
        
    }
};