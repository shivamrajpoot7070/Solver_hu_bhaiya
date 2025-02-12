class Solution {
public:
    int minDeletions(string str) {

        vector<int>hash(26,0);
        vector<int>ct;
        unordered_map<int,int>mpp;

        for(int i=0;i<str.length();i++){
            hash[str[i]-'a']++;
        }

        for(int i=0;i<26;i++){
            if(hash[i]!=0){
                ct.push_back(hash[i]);
                mpp[hash[i]]++;
            }
        }

        sort(ct.begin(),ct.end());

        int min=0;

        for(int i=0;i<ct.size()-1;i++){

            if(ct[i]==ct[i+1]){
                int x=ct[i];
                x--;
                min++;
                while(mpp.find(x)!=mpp.end()){
                    x--;
                    min++;
                }
                ct[i]=x;

                if(x!=0){
                     mpp[x]++;
                }
                
            }
        }

        return min;
        
    }
};