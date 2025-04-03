class Solution {
public:
    long long maximumTripletValue(vector<int>&arr) {

        int n=arr.size();
        vector<int>leftmaxi(n);
        vector<int>rightmaxi(n);


        long long maxi=0;
        leftmaxi[0]=arr[0];
        rightmaxi[n-1]=arr[n-1];

        for(int i=1;i<arr.size();i++){
            leftmaxi[i]=max(leftmaxi[i-1],arr[i-1]);
        }

        for(int i=n-2;i>=0;i--){
            rightmaxi[i]=max(rightmaxi[i+1],arr[i+1]);
        }

        for(int i=0;i<n-1;i++){
            long long val=(long long)(leftmaxi[i]-arr[i])*rightmaxi[i];

            maxi=max(maxi,val);
        }

        return maxi;
    }
};