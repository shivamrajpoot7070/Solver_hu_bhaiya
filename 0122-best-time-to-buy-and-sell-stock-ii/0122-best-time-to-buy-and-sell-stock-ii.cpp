class Solution {
public:
    int maxProfit(vector<int>&arr) {

        long long maxi=0;

        long long ans=0;

        int prevstock=arr[0];

        for(int i=1;i<arr.size();i++){
            if(arr[i]-prevstock>=maxi){
                long long diff=arr[i]-prevstock;
                maxi=max(maxi,diff);
            }
            else{
                ans+=maxi;
                prevstock=arr[i];
                maxi=0;
            }
        }

        ans+=maxi;

        return ans;
        
    }
};