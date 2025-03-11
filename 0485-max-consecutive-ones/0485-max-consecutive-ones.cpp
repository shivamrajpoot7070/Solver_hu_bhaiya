class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {

      int n=arr.size();

      if(n==1 && arr[0]==0){
        return 0;
      }


      int ct=0;

      int maxi=INT_MIN;

      for(int i=0;i<n;i++){
        if(arr[i]==1){
          ct++;
        }
        else{
          maxi=max(maxi,ct);
          ct=0;
        }
      }

      return max(maxi,ct);   


    }
};