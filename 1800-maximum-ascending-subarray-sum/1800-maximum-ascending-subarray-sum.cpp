class Solution {
public:
    int maxAscendingSum(vector<int>&arr) {
        

        int last=-1;

        int maxi=INT_MIN;

        int sum=0;


        int i=0;
        int j=0;

        while(i<arr.size() && j<arr.size()){

            if(arr[j]>last){
                sum+=arr[j];
                last=arr[j];
                j++;
            }
            else{
                maxi=max(maxi,sum);
                sum=arr[j];
                last=arr[j];
                j++;
            }
        }

        maxi=max(maxi,sum);

        return maxi;
    }
};