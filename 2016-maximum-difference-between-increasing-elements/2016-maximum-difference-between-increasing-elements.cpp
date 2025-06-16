class Solution {
public:
    int maximumDifference(vector<int>& arr) {

        pair<int,int>mini;
        pair<int,int>maxi;

        mini.first=arr[0];
        mini.second=0;

        maxi.first=arr[0];
        maxi.second=0;


        int maxdiff=-1;

        for(int i=1;i<arr.size();i++){

            if(arr[i]<mini.first){
                mini.first=arr[i];
                mini.second=i;
            }

            if(arr[i]>maxi.first){
                maxi.first=arr[i];
                maxi.second=i;
            }


            if(maxi.second<mini.second){
                maxi.first=mini.first;
                maxi.second=mini.second;
            }

            int diff=maxi.first-mini.first;

            maxdiff=max(maxdiff,diff);

        }

        return maxdiff;
        
    }
};