class Solution {
public:
    int lengthOfLongestSubstring(string str) {

        unordered_map<char,int>mpp;

        int maxi=-1;
        int i=0;
        int j=0;

        while(i<str.length() && j<str.length()){

            mpp[str[j]]++;

            if(mpp[str[j]]>1){

                while(mpp[str[j]]>1){
                    mpp[str[i]]--;
                    if(mpp[str[i]]==0){
                        mpp.erase(str[i]);
                    }
                    i++;
                }
            }
            maxi=max(maxi,j-i+1);
            j++;
        }

        return maxi;
    }
};