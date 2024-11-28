class Solution {
public:
    bool checkIfPangram(string str) {

        vector<int>hash(26,0);


        for(int i=0;i<str.length();i++){

            hash[str[i]-'a']++;

        }


        for(int i=0;i<26;i++){

            if(hash[i]<1){
                return false;
            }

        }

        return true;


        
    }
};