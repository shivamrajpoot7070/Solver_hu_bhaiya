class Solution {
public:
    bool isUgly(int n) {

        while(n>1){

            if(n%2==0 || n%3==0 || n%5==0){

                if(n%2==0){
                    n=n/2;
                }

                else if(n%3==0){
                    n=n/3;
                }

                else{
                    n=n/5;
                }
            }

            else{

                return false;
            }
        }


        if(n<0){
            return false;
        }

        return true;
        
    }
};