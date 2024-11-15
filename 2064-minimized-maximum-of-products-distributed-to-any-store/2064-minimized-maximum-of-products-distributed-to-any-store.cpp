class Solution {
public:
    bool check(int store, vector<int>&arr,int mid){

        int ct=0;

        for(int i=0;i<arr.size();i++){
            ct+=ceil(static_cast<double>(arr[i]) / mid);
        }


        if(ct<=store){
            return true;
        }

        return false;


    }

    int minimizedMaximum(int store, vector<int>&arr) {

        int mini=INT_MAX;

        int maxi=*max_element(arr.begin(),arr.end());

        int low=1;
        int high=maxi;

        while(low<=high){

            int mid=(low+high)/2;

            if(check(store,arr,mid)){
                mini=min(mini,mid);
                high=mid-1;
            }

            else{
                low=mid+1;
            }


        }

        return mini;

        
    }
};