class Solution {
public:
    int smallestNumber(int n, int t) {


        int num=n;


        while(true){


            int temp=num;
            int prod=1;


            while(temp){
                prod=prod*(temp%10);
                temp=temp/10;
            }

            if(prod%t==0){
                break;
            }

            else{
                num++;
            }
        }

        return num;
        
    }
};