class Solution {
public:
    int minimumAverageDifference(vector<int>&arr) {

        long long mini=INT_MAX;
        int n=arr.size();
        int ind=0;

        long long total=0;

        for(int i=0;i<arr.size();i++){
            total+=arr[i];
        }

        long long left=0;
        long long  right=0;

        for(int i=0;i<arr.size();i++){

            left+=arr[i];
            right=total-left;

            long long la=left/(i+1);
            long long ra;

            if((n-i-1)==0){
                ra=0;
            }
            else{
                ra=right/(n-i-1);
            }

            long long diff=abs(la-ra);

            if(diff<mini){
                mini=diff;
                ind=i;
            }
        }

        return ind;
        
    }
};