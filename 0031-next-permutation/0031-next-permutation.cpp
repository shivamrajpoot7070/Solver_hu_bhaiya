class Solution {
public:
    void nextPermutation(vector<int>& arr) {


        // sort(arr.begin(),arr.end());

        int n=arr.size()-1;

        int index=-1;
        int ele;
        for(int i=n;i>=1;i--){

            if(arr[i]>arr[i-1]){
                index=i-1;
                break;
            }
        }

        if(index==-1){
            sort(arr.begin(),arr.end());
            return;
        }
        sort(arr.begin()+index+1,arr.end());
        
        int j=index+1;

        while(j<=n){
            if(arr[j]>arr[index]){
                swap(arr[j],arr[index]);
                break;
            }
            j++;
        }
    }
};