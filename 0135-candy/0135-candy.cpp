class Solution {
public:
    int candy(vector<int>&arr) {

        int n=arr.size();

        vector<int>l2r(n,1);
        vector<int>r2l(n,1);

        for(int i=1;i<arr.size();i++){  //  left to right side

            if(arr[i]>arr[i-1]){
                l2r[i]=l2r[i-1]+1;
            }
        }

        for(int i=n-2;i>=0;i--){   //  right to left side
             
            if(arr[i]>arr[i+1]){
                r2l[i]=r2l[i+1]+1;
            }
        }

        int candy=0;

        for(int i=0;i<n;i++){
            candy+=max(r2l[i],l2r[i]);
        }

        return candy;
        
    }
};