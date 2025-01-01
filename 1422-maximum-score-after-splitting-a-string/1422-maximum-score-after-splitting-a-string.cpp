class Solution {
public:
    int maxScore(string str) {

        int n=str.length();


        vector<int>zero(n,0);
        vector<int>one(n,0);

        for(int i=0;i<str.length();i++){

            if(i==0){
                if(str[i]=='0'){
                    zero[i]=1;
                }
            }
            else{

                if(str[i]=='0'){
                    zero[i]=zero[i-1]+1;
                }
                else{
                    zero[i]=zero[i-1];
                } 
            }
        }


        for(int i=n-1;i>=0;i--){

            if(i==n-1){
                if(str[i]=='1'){
                    one[i]=1;
                }
            }
            else{
                if(str[i]=='1'){
                    one[i]=one[i+1]+1;
                }
                else{
                    one[i]=one[i+1];
                } 
            }
        }

        int maxi=1;


        for(int i=0;i<n-1;i++){


            if(str[i]=='1'){
                int sum=(zero[i]+one[i])-1;
                maxi=max(maxi,sum);
            }

            else if(str[i]=='0'){
                int sum=(zero[i]+one[i]);
                maxi=max(maxi,sum);
            }

        }

        return maxi;


        
    }
};