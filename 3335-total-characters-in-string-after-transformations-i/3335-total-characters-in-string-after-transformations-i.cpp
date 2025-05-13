class Solution {
public:

    int lengthAfterTransformations(string str, int t) {

        const int MOD = 1e9 + 7;
        
        vector<int>org(26,0);
        vector<int>temp(26,0);


        for(int i=0;i<str.length();i++){
            org[str[i]-'a']++;
        }

        while(t--){
            temp=org;
            for(int i=0;i<26;i++){
                if(i==25){
                    if(temp[i]!=0){
                        int ct=temp[i];
                        (org[0]+=ct)%MOD;
                        (org[1]+=ct)%MOD;
                        (org[i]-=ct)%MOD;
                    }
                }
                else{
                    if(temp[i]!=0){
                        int ct=temp[i];
                        (org[i]-=ct)%MOD;
                        (org[i+1]+=ct)%MOD;
                    }
                }
            }
        }

        long long ct=0;
        int i=0;
        while(i<26){
            ct+=org[i];
            i++;
        }

        return ct;


    }
};