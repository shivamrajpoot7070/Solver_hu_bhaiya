class Solution {
public:
    int maxProduct(vector<int>&arr) {

        int maxi=INT_MIN;

        int prefix=1;
        int n=arr.size();
        int suffix=1;

        for(int i=0;i<arr.size();i++){

            prefix=prefix*arr[i];
            suffix=suffix*arr[n-i-1];

            maxi=max(maxi,max(suffix,prefix));

            if(prefix==0){
                prefix=1;
            }
            if(suffix==0){
                suffix=1;
            }
        }

        return maxi;
        
    }
};