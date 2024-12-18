class Solution {
public:
    int hammingWeight(int num) {


        string ans;
        string temp="";
        string bit="";

        int ct=0;

                while(num>1){
                    int rem=(num%2);
                    bit+=rem+'0';
                    num=num/2;
                }

               bit+=num+'0';

        //         int m=bit.length()-1;  // rverse me rhega isly sidhe me lane k liy

        //         while(m>=0){
        //             ans+=bit[m];
        //             m--;
        //         }

        //         if(i!=arr.length()){
        //             ans+='-';
        //         }
                
        //         temp="";
        //     }
        //     else{
        //         temp+=arr[i];
        //     }

            
        // }

        for(int i=0;i<bit.length();i++){
            if(bit[i]=='1'){
                ct++;
            }
        }

        return ct;
        
    }
};