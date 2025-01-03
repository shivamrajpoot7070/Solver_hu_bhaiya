class Solution {
public:
    int waysToSplitArray(vector<int>& arr) {
        int n=arr.size();
        vector<long long>left(n,0);
        vector<long long>right(n,0);

        left[0]=arr[0];
        right[n-1]=arr[n-1];

        for(int i=1;i<n;i++){
            left[i]=left[i-1]+arr[i];
            cout<<left[i];
        }

        for(int i=n-2;i>=0;i--){
            right[i]=right[i+1]+arr[i];
            cout<<right[i];
        }

        int ct=0;


        for(int i=0;i<n-1;i++){
            if(left[i]>=right[i+1]){
                ct++;
            }
        }

        return ct;
        
    }
};