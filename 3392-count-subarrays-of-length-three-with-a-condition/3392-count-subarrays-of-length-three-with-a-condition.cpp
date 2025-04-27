class Solution {
public:
    int countSubarrays(vector<int>&arr) {
        
        int n;
        int i=0;
        int j=0;
        int ct=0;

        while(i<arr.size() && j<arr.size()){

            if(j-i+1==3){
                if(abs(arr[i]+arr[j])){
                    
                    if(arr[i+1]%2==0){
                        if(arr[i]+arr[j]==arr[i+1]/2){
                            ct++;
                        }
                    }
                }
                i++;
            }
            j++;
        }

        return ct;
    }
};