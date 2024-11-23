class Solution {
public:
    bool canAliceWin(int n) {


        if(n<10){
            return false;
        }

        bool flag=false;

        while(n>=9){

            if(flag){
                flag=false;
            }

            else{
                flag=true;
            }

            n=n-10;
        } 


        return flag;    
    }
};