class Solution {
public:
    int longestMountain(vector<int>& arr) {

        int len=INT_MIN;

        if(arr.size()<3){
            return 0;
        }

        for(int i=1;i<arr.size()-1;i++){

            int mini=arr[i];
            int maxi=arr[i];

            int j=i-1;
            int r=i+1;

            for(j;j>=0;j--){
                if(arr[j]<mini){
                    mini=arr[j];
                }
                else{
                    j++;
                    break;
                }
            }

            for(r;r<arr.size();r++){
                if(arr[r]<maxi){
                    maxi=arr[r];
                }
                else{
                    r--;
                    break;
                }
            }

            if(j<0){
                j=0;
            }
            if(r>=arr.size()){
                r=arr.size()-1;
            }

            if(r-i==i-j){
                len=max(len,r-j+1);
            }

            
        }


        if(len==1 || len==INT_MIN){
            return 0;
        }

        return len;
        
    }
};