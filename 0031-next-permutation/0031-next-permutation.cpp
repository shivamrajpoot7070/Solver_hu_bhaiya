class Solution {
public:
    void nextPermutation(vector<int>& arr) {
    
        int swapidx=-1;
        int i=arr.size()-2;
        while(i>=0 && arr[i]>=arr[i+1]){
            i--;
        }

        if(i<0){
            sort(arr.begin(),arr.end());
            return;
        }

        swapidx=i;

        sort(arr.begin()+swapidx+1,arr.end());

        for(int j=swapidx+1;j<arr.size();j++){
            if(arr[j]>arr[swapidx]){
                swap(arr[j],arr[swapidx]);
                break;
            }
        }
    }
};