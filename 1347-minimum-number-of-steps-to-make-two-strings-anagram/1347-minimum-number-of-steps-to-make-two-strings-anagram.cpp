class Solution {
public:
    int minSteps(string str1, string str2) {

       // 1st way

       int len=str1.length();

    int hash[26]={0};
    int hash1[26]={0};
    int ct=0;


    for(int i=0;i<str1.length();i++){
        hash[str1[i]-'a']++;
    }

    for(int i=0;i<str2.length();i++){
        hash1[str2[i]-'a']++;
    }

    int result=0;

    for(int i=0;i<26;i++){
        if(hash[i]>hash1[i]){
            result+=hash[i]-hash1[i];
        }
    }

    return result;

    //                                      // 2nd way



        

        
    }
};