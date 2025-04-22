class Solution {
public:
    int maxScore(vector<int>&arr, int k) {
        
        int ksum=0;
        
        for(int i=0;i<k;i++){
            ksum+=arr[i];
        }
        int maxi=ksum;
        int i=k-1;
        int j=arr.size()-1;

        while(i>=0){
            ksum-=arr[i];
            ksum+=arr[j];
            maxi=max(maxi,ksum);
            i--;
            j--;
        }

        return maxi;
    }
};