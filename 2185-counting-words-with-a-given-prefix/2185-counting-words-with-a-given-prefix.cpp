class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int ct=0;

        for(int i=0;i<words.size();i++){
            bool flag=true;
            for(int j=0;j<pref.length();j++){
                if(pref[j]!=words[i][j]){
                    flag=false;
                    break;
                }

            }

            if(flag){
                ct++;
            }

        }

        return ct;
        
    }
};