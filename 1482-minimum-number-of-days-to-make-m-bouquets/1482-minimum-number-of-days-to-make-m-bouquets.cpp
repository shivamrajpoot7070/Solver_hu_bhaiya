class Solution {
public:

    bool poss(vector<int>& arr, int m, int k,int mid){

            int day=mid;
            int flow=k;

            for(int i=0;i<arr.size();i++){

                if(arr[i]<=day){
                    k--;
                    if(k==0){
                        cout<<"mila"<<" ";
                        k=flow;
                        m--;
                    }
                }
                else{
                    k=flow;
                }
            }

            if(m<=0) return true;
            return false;

    }
    int minDays(vector<int>& arr, int m, int k) {

        int n=arr.size();

        if((long long)m*k>n) return -1;
        
        if(m*k>arr.size()) return -1;


        long long low=*min_element(arr.begin(),arr.end());
        long long high=*max_element(arr.begin(),arr.end());

        int ans=-1;

        while(low<=high){

            long long mid=(low+high)/2;

            cout<<mid<<" ";

            if(poss(arr,m,k,mid)){
                ans=mid;
                cout<<ans<<" ";
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }

        return ans;



    }
};