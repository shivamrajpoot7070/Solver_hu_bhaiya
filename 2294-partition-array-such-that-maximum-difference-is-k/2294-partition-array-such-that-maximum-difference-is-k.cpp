class Solution {
public:
    int partitionArray(vector<int>& arr, int k) {

        sort(arr.begin(),arr.end());
        int n=arr.size();
        int i=0;

        int ct=0;
        int st=0;


        while(i<arr.size()){

            st=arr[i];
            ct++;
            while(i<arr.size() && arr[i]-st<=k){
                i++;
            }
            
        }
        
        return ct;
    }
};