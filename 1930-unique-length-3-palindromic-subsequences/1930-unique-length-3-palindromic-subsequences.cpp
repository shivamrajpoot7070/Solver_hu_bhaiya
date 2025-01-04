class Solution {
public:
    int countPalindromicSubsequence(string str) {

        unordered_map<char,int>mpp;
        unordered_map<char,int>loc;

        for(int i=0;i<str.length();i++){
            mpp[str[i]]++;
            loc[str[i]]=i;
        }


        vector<int>vis(26,0);
        int ct=0;

        for(int i=0;i<str.length();i++){

            if(vis[str[i]-'a']==0 && mpp[str[i]]>=2){
                int j=loc[str[i]];
                j=j-1;
                vector<int>hash(26,0);

                while(j>i){

                    if(hash[str[j]-'a']==0){
                        ct++;
                        hash[str[j]-'a']++;
                    }
                    j--;
                }
                vis[str[i]-'a']++;
            }
        }

        return ct;



    }
};