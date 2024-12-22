class Solution {
public:
    int countSubarrays(vector<int>& arr) {

        int ct=0;
        int n=arr.size();


        for(int i=0;i<=n-3;i++){

            int s=0;
            s=arr[i]+arr[i+2];

            if(s==0){

                if(arr[i+1]==0){
                    ct++;
                }
                
            }

            else{
                if(s==arr[i+1]/2){
                    ct++;
                }
            }

            
        }

        return ct;
        
    }
};