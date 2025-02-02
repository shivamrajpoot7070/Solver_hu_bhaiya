class Solution {
public:
    int maxDifference(string str) {
        
        vector<int>hash(26,0);

        int odd=0;
        int even=INT_MAX;


        for(int i=0;i<str.length();i++){
            hash[str[i]-'a']++;
        }


        for(int i=0;i<26;i++){
        
        if(hash[i]!=0){

            if(hash[i]%2!=0){
                odd=max(odd,hash[i]);
            }

            else{
                even=min(even,hash[i]);
            }
        }
        }


        return odd-even;
    }
};