class Solution {
public:
    int maxProfit(vector<int>&arr) {

        pair<int,int>ma;
        pair<int,int>mi;

        int maxi=INT_MIN;
        int mini=INT_MAX;

        int ans=INT_MIN;


        for(int i=0;i<arr.size();i++){

            if(arr[i]>maxi){
                maxi=arr[i];
                ma.first=maxi;
                ma.second=i;
            }


            if(arr[i]<mini){
                mini=arr[i];
                mi.first=mini;
                mi.second=i;
            }

            if(mi.second>ma.second){
                maxi=arr[i];
                ma.second=i;
                ma.first=arr[i];
            }


            ans=max(ans,ma.first-mi.first);
        }


        return ans;

        
    }
};