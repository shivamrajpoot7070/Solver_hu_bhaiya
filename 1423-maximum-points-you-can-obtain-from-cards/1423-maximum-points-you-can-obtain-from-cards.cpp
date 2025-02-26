class Solution {
public:
    int maxScore(vector<int>& arr, int k) {

        int lsum=0;
        int n=arr.size();

        for(int i=0;i<k;i++){
            lsum+=arr[i];
        }

        int rsum=0;
        int i=arr.size()-1;
        int x=k;
        while(x--){
            rsum+=arr[i];
            i--;
        }

        int fstk_1=(lsum-arr[k-1])+arr[n-1];
        int lastk_1=rsum-arr[n-k]+arr[0];

        int combo=max(fstk_1,lastk_1);
        int lrmax=max(lsum,rsum);
        
        return max(lrmax,combo);

    }
};