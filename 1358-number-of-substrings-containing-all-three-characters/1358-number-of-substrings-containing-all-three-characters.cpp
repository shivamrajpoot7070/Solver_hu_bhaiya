class Solution {
public:
    int numberOfSubstrings(string str) {

        int ct=0;
        int n=str.length();

        map<char,int>mpp;
        int i=0;
        int j=0;

        while(i<n && j<n){

            mpp[str[j]]++;

            if(mpp.size()==3){

                while(mpp.size()==3){
                    ct+=n-j;
                    mpp[str[i]]--;

                    if(mpp[str[i]]==0){
                        mpp.erase(str[i]);
                    }
                    i++;
                }
            }

            j++;

        }

        return ct;

    }
};