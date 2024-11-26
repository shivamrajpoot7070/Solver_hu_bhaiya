class Solution {
public:
    bool isSubsequence(string s, string t) {

        int ind=0;

        string ans="";

        for(int i=0;i<s.length();i++){

            int index=-1;
            int j=ind;

            while(j<t.size()){

                if(t[j]==s[i]){
                    index=j;
                    ans+=t[j];
                    break; 
                }
                j++;
            }

            if(index==-1){
                return false;
            }

            else{
                ind=index+1;
            }

        }


        if(s==ans){
            return true;
        }


        return false;


        
    }
};