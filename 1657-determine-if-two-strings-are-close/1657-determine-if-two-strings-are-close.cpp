class Solution {
public:
    bool closeStrings(string str1, string str2) {

        vector<int>hash1(26,0);
        vector<int>hash2(26,0);

        if(str1.length()!=str2.length()){
            return false;
        }


        for(int i=0;i<str1.length();i++){

            hash1[str1[i]-'a']++;
            hash2[str2[i]-'a']++;
        }
        vector<int>ct1;
        vector<int>ct2;

        for(int i=0;i<hash1.size();i++){

            if((hash1[i]==0 && hash2[i]!=0) || (hash1[i]!=0 && hash2[i]==0)){
                return false;
            }

            else{
                ct1.push_back(hash1[i]);
                ct2.push_back(hash2[i]);
            }
        }

        sort(ct1.begin(),ct1.end());
        sort(ct2.begin(),ct2.end());

        if(ct1!=ct2){
            return false;
        }

        return true;

    }
};