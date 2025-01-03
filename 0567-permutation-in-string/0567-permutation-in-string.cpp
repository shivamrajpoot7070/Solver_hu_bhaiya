class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        vector<int>hash2(26,0);
        vector<int>hash1(26,0);


        for(int i=0;i<s1.length();i++){
            hash1[s1[i]-'a']++;
        }

        int i=0;
        int j=0;
        int n=s2.length();
        int win=s1.length();

        while(i<n && j<n){

            hash2[s2[j]-'a']++;

            if(j-i+1==win){

                if(hash1==hash2){
                    return true;
                }

                hash2[s2[i]-'a']--;
                i++;
            }
            j++;
        }

        return false;
        
    }
};