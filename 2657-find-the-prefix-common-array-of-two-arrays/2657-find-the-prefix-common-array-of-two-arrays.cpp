class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& a, vector<int>& b) {

        vector<int>hash(51,0);
        vector<int>hash1(51,0);
        int n=a.size();

        vector<int>ans(n,0);
        
        for(int i=0;i<a.size();i++){

            hash[a[i]]++;
            hash1[b[i]]++;

            int ct=0;

            for(int j=1;j<hash.size();j++){

                if(hash[j]!=0 && hash1[j]!=0){

                    if(hash[j]==hash1[j]){
                        ct++;
                    }

                    
                }
            }

            ans[i]=ct;

        }

        return ans;
        
    }
};