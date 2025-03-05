class Solution {
public:
    int lengthAfterTransformations(string str, int t) {

        const int MOD = 1e9 + 7;

       int length=str.length();

       vector<int>hash(26,0);

    for(int i=0;i<str.length();i++){
        hash[str[i]-'a']++;
    }

        while(t--){

            vector<int>temp(26,0);

            for(int i=0;i<26;i++){
                char ch='a'+i;

                if(hash[i]!=0 && ch!='z'){
                    temp[i+1]+=hash[i]%MOD;
                }

                if(hash[i]!=0 && ch=='z'){
                    temp[0]+=hash[i]%MOD;
                    temp[1]+=hash[i]%MOD;
                }

            }
            hash=temp;
        }

        long long ct=0;


        for(int i=0;i<26;i++){

            if(hash[i]!=0){
                ct+=hash[i];
            }


        }

        return ct%MOD;

        
           
        
    }
};