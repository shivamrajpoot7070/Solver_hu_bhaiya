class Solution {
public:
    int minDeletion(vector<int>&arr) {

        int newidx=0;
        int len=arr.size();

        for(int i=0;i<arr.size()-1;i++){

            int j=i-newidx;

            if(j%2==0){
                if(arr[i]==arr[i+1]){
                    newidx++;
                }
            }
        }

        if((len-newidx)%2!=0){
            newidx++;

            return newidx;
        }

        return newidx;
        
    }
};