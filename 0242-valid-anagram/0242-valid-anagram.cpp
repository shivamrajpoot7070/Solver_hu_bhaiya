class Solution {
public:
    bool isAnagram(string str, string arr) {

        vector<int>hash1(26,0);
        vector<int>hash2(26,0);


        for(int i=0;i<str.length();i++){
            hash1[str[i]-'a']++;
        }

        for(int i=0;i<arr.length();i++){
            hash2[arr[i]-'a']++;
        }


        if(hash1!=hash2){
            return false;
        }

        return true;
        
    }
};