class Solution {
public:
    int minOperations(vector<int>& arr, int k) {

        sort(arr.begin(),arr.end());
        int n=arr.size();

        int maxi=arr[n-1]-1;
        int ct=0;

        while(arr[0]!=arr[n-1]){
            int h;
            int i=0;
            while(true){
                if(arr[i]==maxi){
                    h=arr[i];
                    break;
                }
                if(i==n-1){
                    maxi--;
                    i=0;
                }
                else{
                    i++;
                }
            }

            for(int k=n-1;k>=0;k--){
                if(arr[k]>h){
                    arr[k]=h;
                }
            }
            ct++;
            maxi--;
        }

        if(arr[0]==arr[n-1]){
            

            if(arr[0]==k){
                return ct;
            }

            if(k<arr[0]){
                ct++;
                return ct;
            }


        }

        return -1;

        
    }
};