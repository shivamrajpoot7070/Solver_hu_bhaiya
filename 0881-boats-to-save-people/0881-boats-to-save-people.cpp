class Solution {
public:
    int numRescueBoats(vector<int>& arr, int limit) {

        int val=limit;
        sort(arr.begin(),arr.end());
        int boat=1;

        int i=0;

        while(i<arr.size()){

            if(arr[i]<=val){
                val=val-arr[i];
                i++;
            }

            else{
                boat++;
                val=limit;
            }
        }

        return boat;
    }
};