class Solution {
public:
    int minDeletion(vector<int>& arr) {


        int del=0;

        for(int i=0;i<arr.size()-1;i++){

            int newidx=i-del;

            if(newidx%2==0){

                if(arr[i]==arr[i+1]){
                    del++;
                }
            }
        }

        int newlen=arr.size()-del;

        if(newlen%2!=0){
            del++;
            return del;
        }

        return del;
        
    }
};