class Solution {
public:
    bool isArraySpecial(vector<int>&arr) {

        int n=arr.size();

        if(n<=1){
            return true;
        }


        int i=0;
        int j=0;


        for(int i=1;i<n;i++){

            if((arr[i]%2!=0 && arr[i-1]%2==0) || (arr[i]%2==0 && arr[i-1]%2!=0)){
                continue;
            }


            else{
                return false;
            }

        }

        return true;
        
    }
};