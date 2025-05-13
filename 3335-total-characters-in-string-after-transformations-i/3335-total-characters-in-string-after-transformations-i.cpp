class Solution {
public:
    int lengthAfterTransformations(string str, int t) {

        vector<int>hash(26,0);

        for(int i=0;i<str.length();i++){
            hash[str[i]-'a']++;
        }

        const int mod=1e9+7;

        while(t--){

            vector<int>temp(26,0);

            for(int i=0;i<26;i++){

                if(i!=25 && hash[i]>0){
                    temp[i+1]+=hash[i]%mod;
                }

                else if(i==25 && hash[i]>0){
                    temp[0]+=hash[i]%mod;
                    temp[1]+=hash[i]%mod;
                }
            }
            hash=temp;
        }

        int ct=0;
        

        long long total=0;

        for(int i=0;i<26;i++){
            if(hash[i]>0){
                total+=hash[i];
            }
        }

        return total%mod;

        
    }
};