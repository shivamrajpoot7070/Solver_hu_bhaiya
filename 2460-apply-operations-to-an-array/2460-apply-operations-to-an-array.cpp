class Solution {
public:
    vector<int> applyOperations(vector<int>&arr) {


        for(int i=0;i<arr.size()-1;i++){

            if(arr[i]==arr[i+1]){
                arr[i]=arr[i]*2;
                arr[i+1]=0;
            }
            else{
                continue;
            }
        }

        int ind=0;
        int i=0;

        while(i<arr.size()){
            if(arr[i]!=0){
                swap(arr[ind],arr[i]);
                ind++;
            }
            i++;
        }

        return arr;
    }
};