class Solution {
public:
    int minOperations(vector<int>&arr) {

        int i=0;

        int n=arr.size();
        int ct=0;

        for(int i=1;i<n;i++){
            if(arr[i]<=arr[i-1]){
                int diff=abs(arr[i]-arr[i-1])+1;
                ct+=diff;
                arr[i]+=diff;
            }
        }

        return ct;
        
    }
};