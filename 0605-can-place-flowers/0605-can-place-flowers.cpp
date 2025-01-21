class Solution {
public:
    bool canPlaceFlowers(vector<int>& arr, int key) {

        int n=arr.size();

        if(key==0){
            return true;
        }

        if(n==1){
            if(arr[0]==0){
                return true;
            }

            return false;
        }

        int x=key;

        for(int i=0;i<arr.size();i+=2){

            if(arr[i]==0){

                if(i==0){
                    if(arr[i+1]==0){
                        key--;
                    }
                }

                else if(i==n-1){
                    if(arr[i-1]==0){
                        key--;
                    }
                }

                else{

                   if(arr[i-1]==0 && arr[i+1]==0){
                       key--;
                   }
                 }
            }

            if(key==0){
                return true;
            }
        
        }

        key=x;


        for(int i=1;i<arr.size();i+=2){

            if(arr[i]==0){
                if(i==0){
                    if(arr[i+1]==0){
                        key--;
                    }
                }

                else if(i==n-1){
                    if(arr[i-1]==0){
                        key--;
                    }
                }

                else{

                   if(arr[i-1]==0 && arr[i+1]==0){
                       key--;
                   }
                 }
            }

            if(key==0){
                return true;
            }
        
        }


        return false;


        
    }
};