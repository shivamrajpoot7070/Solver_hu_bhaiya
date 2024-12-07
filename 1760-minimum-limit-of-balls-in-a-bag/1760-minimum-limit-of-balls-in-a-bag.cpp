class Solution {
public:

    bool check(vector<int>& arr, int op,int mid){

        int ct=0;

        for(int x:arr){

            int op=x/mid;
            
            if(x%mid==0){
                op+=-1;
            }

            ct+=op;
        }

        if(ct>op){
            return false;
        }


        return true;
    }
    int minimumSize(vector<int>& arr, int op) {


        int high=*max_element(arr.begin(),arr.end());


        int low=1;
        int ans=INT_MAX;

        while(low<=high){

            int mid=(low+high)/2;

            if(check(arr,op,mid)){
                ans=min(ans,mid);
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }


        return ans;



    
    }
};