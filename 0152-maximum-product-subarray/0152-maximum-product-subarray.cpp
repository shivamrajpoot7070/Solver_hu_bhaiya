class Solution {
public:
    int maxProduct(vector<int>&arr) {
        

        int prod=1;

        int leftpro=1;
        int rightpro=1;

        int maxileft=*max_element(arr.begin(),arr.end());
        int maxiright=*max_element(arr.begin(),arr.end());

        for(int i=0;i<arr.size();i++){

            if(arr[i]==0){
                leftpro=1;
            }
            else{
            leftpro=leftpro*arr[i];
            maxileft=max(maxileft,leftpro);
            }
        }

        for(int i=arr.size()-1;i>=0;i--){

            if(arr[i]==0){
                rightpro=1;
            }
            else{
            rightpro=rightpro*arr[i];
            maxiright=max(maxiright,rightpro);
            }
        }


        return max(maxiright,maxileft);



        



    }
};