class Solution {
public:
    int minSteps(string str1, string str2) {

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

    //  map<char,int>mpp1;
    // map<char,int>mpp2;

    // for(int i=0;i<str1.length();i++){
    //     mpp1[str1[i]]++;
    // }

    // for(int i=0;i<str2.length();i++){
    //     mpp2[str2[i]]++;
    // }


    // int ct1=0;
    // int ct2=0;


    // for(int i=0;i<str2.length();i++){

    //     if(mpp2.find(str1[i])!=mpp2.end()){

    //         mpp2[str1[i]]--;

    //         if(mpp2[str1[i]]==0){
    //             mpp2.erase(str1[i]);
    //         }
    //     }

    //     else{

    //         ct1++;
    //     }


    // }


    // for(int i=0;i<str2.length();i++){

    //     if(mpp1.find(str2[i])!=mpp1.end()){

    //         mpp1[str2[i]]--;

    //         if(mpp1[str2[i]]==0){
    //             mpp1.erase(str2[i]);
    //         }
    //     }

    //     else{

    //         ct2++;
    //     }


    // }

    // return max(ct1,ct2);







        
    }
};