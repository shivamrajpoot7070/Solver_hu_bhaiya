class Solution {
public:
    string convertDateToBinary(string arr) {

        string ans;
        string temp="";
        string bit="";

        for(int i=0;i<=arr.length();i++){

            if(arr[i]=='-' || i==arr.length()){

                int num=0;

                // if(temp[0]=='0'){
                //     num=temp[1]-'0';
                // }

                // else{
                //     num=stoi(temp);
                // }

                num=stoi(temp);

                bit="";

                while(num>1){
                    int rem=(num%2);
                    bit+=rem+'0';
                    num=num/2;
                }

                bit+=num+'0';

                int m=bit.length()-1;

                while(m>=0){
                    ans+=bit[m];
                    m--;
                }

                if(i!=arr.length()){
                    ans+='-';
                }

                
                temp="";
            }
            else{
                temp+=arr[i];
            }

            
        }

        return ans;
        
    }
};