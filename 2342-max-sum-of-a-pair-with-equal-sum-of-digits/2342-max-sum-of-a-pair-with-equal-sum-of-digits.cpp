class Solution {
public:
    int maximumSum(vector<int>& arr) {

        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            int sum=0;
            int num=arr[i];
            while(num>0){
                sum+=num%10;
                num=num/10;
            }
            mpp[arr[i]]=sum;
        }

        sort(arr.begin(),arr.end());

        int i=0;
        int j=arr.size()-1;
        int maxi=-1;

        while(i<arr.size() && i<j){

            while(j>i){

              int isum=mpp[arr[i]];
              int jsum=mpp[arr[j]];

               if(isum==jsum){
                  maxi=max(maxi,arr[i]+arr[j]);
                  break;
               }
               else{
                   j--;
               }
            }
            i++;
            j=arr.size()-1;
        }

        return maxi;
        
    }
};