class Solution {
public:
    int majorityElement(vector<int>& arr) {

        int ct=0;
        int curr=0;


        for(int i=0;i<arr.size();i++){

            if(ct==0){
                curr=arr[i];
                ct=1;
            }

            else if(arr[i]==curr){
                ct++;

            }

            else{
                ct--;
            }
        }

        int occ=0;


        for(int i=0;i<arr.size();i++){

            if(arr[i]==curr){
                occ++;

            }
        }

        int n=arr.size();

        if(occ>n/2){
            return curr;
        }
        
        return -1;
    }
};