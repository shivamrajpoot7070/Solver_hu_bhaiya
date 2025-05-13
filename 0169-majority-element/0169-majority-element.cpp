class Solution {
public:
    int majorityElement(vector<int>&arr) {

        int ct=1;
        int ele=arr[0];

        for(int i=1;i<arr.size();i++){

            if(ct==0){
                ele=arr[i];
                ct=0;
            }

            if(ele==arr[i]){
                ct++;
            }
            else{
                ct--;
            }
        }

        return ele;
        
    }
};