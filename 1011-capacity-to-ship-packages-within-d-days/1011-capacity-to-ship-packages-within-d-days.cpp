class Solution {
public:

    bool check(vector<int>& arr,int day,int wt){

      int val=wt;
      int ct=1;

      for(int i=0;i<arr.size();i++){

        if(arr[i]<=wt){
          wt=wt-arr[i];
        }
        else{
          ct++;
          wt=val;
          wt=wt-arr[i];
          
          if(ct>day){
            return false;
          }
        }
      }
      
      return true;
    }


    int shipWithinDays(vector<int>& arr, int day) {

      int low=*max_element(arr.begin(),arr.end());
      int high=0;

      for(int i=0;i<arr.size();i++){
        high+=arr[i];
      }
      //int high=500;
      int mini;

      while(low<=high){

        int mid=low+(high-low)/2;

        if(check(arr,day,mid)){
          mini=mid;
          high=mid-1;
        }
        else{
          low=mid+1;
        }

      }

      return mini;


        
    }
};