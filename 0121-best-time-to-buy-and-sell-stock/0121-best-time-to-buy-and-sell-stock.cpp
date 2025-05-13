class Solution {
public:
    int maxProfit(vector<int>&arr) {

        int maxi=0;

        pair<int,int>buy;
        pair<int,int>sell;

        buy.first=arr[0];
        buy.second=0;

        sell.first=arr[0];
        sell.second=0;

        for(int i=1;i<arr.size();i++){

            if(buy.second<=sell.second){
                int profit=sell.first-buy.first;
                maxi=max(maxi,profit);
            }
            else{
                sell.second=i;
                sell.first=arr[i];
            }

            if(buy.first>arr[i]){
                buy.first=arr[i];
                buy.second=i;
            }

            if(arr[i]>sell.first){
                sell.first=arr[i];
                sell.second=i;
            }
        }

        if(buy.second<=sell.second){
                int profit=sell.first-buy.first;
                maxi=max(maxi,profit);
        }

        return maxi;
        
    }
};