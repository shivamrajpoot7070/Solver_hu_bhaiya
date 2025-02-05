class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {

        int swap=0;

        if(s1.length()!=s2.length()) return false;

        int fst=-1;
        int scnd=-1;

        for(int i=0;i<s1.length();i++){

            if(s1[i]!=s2[i]){

                if(fst!=-1){
                    scnd=i;
                }
                else{
                    fst=i;
                }
                swap++;
            }

            if(swap>2){
                return false;
            }
        }

        if(swap==0){
            return true;
        }

        if(swap==1){
            return false;
        }

        if(fst!=-1 && scnd!=-1){
            if(s1[fst]==s2[scnd] && s2[fst]==s1[scnd]){
            return true;
        }

        }

        
        return false;
    }
};