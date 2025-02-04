class Solution {
public:
    bool repeatedSubstringPattern(string str) {




        int len=str.length();


        // if(len%2!=0){
        //     return false;
        // }

        int mid=len/2;

        int i=mid;

        while(i>0){

            if(len%i==0){

                string c=str.substr(0,i);

                int tym=len/i;

                string match="";

                for(int i=0;i<tym;i++){
                    match+=c;
                }

                if(match==str){
                    return true;
                }

            }
            i--;
        }

        return false;
        
    }
};