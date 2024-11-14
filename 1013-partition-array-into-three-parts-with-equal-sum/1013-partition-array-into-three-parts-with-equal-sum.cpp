class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {

        int sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
        }

        if(sum%3!=0){
            return false;
        }


        int part=sum/3;
        int ct=0;

        int temp=0;

        for(int i=0;i<arr.size()-1;i++){

            temp+=arr[i];

            if(temp==part){
                ct++;
                temp=0;
            }

             if (ct == 2) {
                return true;
            }




        }

        // if(temp==0){
        //     return true;
        // }

        // if(ct==3){
        //     return true;
        // }

        return false;
        
    }
};