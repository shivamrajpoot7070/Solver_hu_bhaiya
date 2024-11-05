class Solution {
public:
    int minChanges(string str) {

        int mini=INT_MAX;
        int index=-1;

        for(int i=0;i<str.length();i++){

            int z=0;
            int on=0;
          if(i%2==0){

            for(int j=i;j<str.length();j++){

                if(str[j]=='0'){
                    z++;
                }

                else{
                    on++;
                }

            }

            int diff=min(z,on);

            if(diff<mini){
                mini=diff;
                index=i;
            }

          }

        }


        int zf=0;
        int of=0;

        for(int k=0;k<index;k++){

            if(str[k]=='0'){
                zf++;
            }
            else{
                of++;
            }
        }

        int mi=min(zf,of);

        return mini+mi;



        
    }
};