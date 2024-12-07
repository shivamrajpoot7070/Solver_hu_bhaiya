class Solution {
public:
    int getLargestOutlier(vector<int>& arr) {

       int sum=accumulate(arr.begin(),arr.end(),0);
       int n=arr.size();
       int ans=INT_MIN;
       sort(arr.begin(),arr.end());


       for(int i=0;i<arr.size();i++){


            int out=sum-(2*arr[i]);

            int low=0;
            int high=i-1;

            while(low<=high){

                int mid=(low+high)/2;

                if(arr[mid]==out){
                    ans=max(ans,arr[mid]);
                    break;
                }

                else if(arr[mid]>out){
                    high=mid-1;
                }

                else{
                    low=mid+1;
                }

            }


            low=i+1;
            high=n-1;


            while(low<=high){

                int mid=(low+high)/2;

                if(arr[mid]==out){
                    ans=max(ans,arr[mid]);
                    break;
                }

                else if(arr[mid]>out){
                    high=mid-1;
                }

                else{
                    low=mid+1;
                }


            }




       }

       return ans;



        
    }
};