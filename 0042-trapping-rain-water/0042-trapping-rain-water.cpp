class Solution {
public:
    int trap(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n);
        vector<int>right(n);

        left[0]=arr[0];
        right[n-1]=arr[n-1];

        int maxi=arr[0];

        for(int i=1;i<arr.size();i++){
            maxi=max(maxi,arr[i]);
            left[i]=maxi;
        }

        maxi=arr[n-1];
        for(int i=n-2;i>=0;i--){
            maxi=max(maxi,arr[i]);
            right[i]=maxi;
        }

        for(int i=0;i<n;i++){
            cout<<left[i]<<" ";
        }

        cout<<"\n";

        for(int i=0;i<n;i++){
            cout<<right[i]<<" ";
        }

        int ans=0;

        for(int i=0;i<n;i++){
           ans+=min(right[i],left[i])-arr[i];
        }

        return ans;
    }
};