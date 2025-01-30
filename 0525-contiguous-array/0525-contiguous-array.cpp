class Solution {
public:
    int findMaxLength(vector<int>& arr) {


        int i=0;
        int j=0;

        unordered_map<int,int>mpp;

        mpp[0]=-1;

        int res=0;

        int n=arr.size();

        int maxi=INT_MIN;

        int csum=0;

        while(i<n){

            if(arr[i]==0){
                csum+=-1;
            }
            else{
                csum+=arr[i];
            }

            if(mpp.find(csum)!=mpp.end()){
                res=max(res,i-mpp[csum]);
            }

            else{
                mpp[csum]=i;
            }

            i++;
            
        }


        return res;

    }
};