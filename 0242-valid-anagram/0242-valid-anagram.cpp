class Solution {
public:
    bool isAnagram(string str1, string str2) {


      int len=str1.length();
    int len1=str2.length();
    int hash[26]={0};

    int hash1[26]={0};


    for(int i=0;i<len;i++){
        hash[str1[i]-'a']++;
    }

    for(int i=0;i<len1;i++){
        hash1[str2[i]-'a']++;
    }

    for(int i=0;i<26;i++){
        if(hash[i]!=hash1[i]){
            return false;
        }
    }

    return true;
        
    }
};