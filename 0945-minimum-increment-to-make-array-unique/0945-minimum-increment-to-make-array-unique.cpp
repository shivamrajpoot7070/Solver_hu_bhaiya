class Solution {
public:
    int minIncrementForUnique(vector<int>& arr) {
        
        int n=arr.size();
        sort(arr.begin(),arr.end());

        int ct=0;

        for(int i=1;i<arr.size();i++){

            if(arr[i]<=arr[i-1]){

                int diff=abs(arr[i]-arr[i-1])+1;

                ct+=diff;

                arr[i]+=diff;
            }
        }

        return ct;
    }
};