class Solution {
public:
    string fractionAddition(string expr) {

        int nume=0;
        int deno=1;


        int i=0;
        int n=expr.length();

        while(i<n){

            int currnum=0;
            int currdeno=0;


            bool flag=(expr[i]=='-');

            if(expr[i]=='-' || expr[i]=='+'){
                i++;
            }


            while(i<n && isdigit(expr[i])){

                int val=expr[i]-'0';

                currnum=(currnum*10)+val;
                i++;
            }


            if(flag){
                currnum=currnum*-1;
            }

            i++;


            while(i<n && isdigit(expr[i])){   

                int num=expr[i]-'0';
                currdeno=(currdeno*10)+num;

                i++;

            }

            nume=(nume*currdeno)+(currnum*deno);
            deno=deno*currdeno;

        }


            int gcd=abs(__gcd(nume,deno));

            nume/=gcd;
            deno/=gcd;

        


        return  to_string(nume)+"/"+to_string(deno);
        
    }
};