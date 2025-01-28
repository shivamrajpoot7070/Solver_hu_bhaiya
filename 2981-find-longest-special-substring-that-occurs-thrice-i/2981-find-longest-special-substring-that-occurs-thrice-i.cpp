class Solution {
public:
    int maximumLength(string str) {

        if(str.length()<3){
            return -1;
        }


        map<int,int>mpp;
        int n=str.length();

        for(int i=0;i<str.length();i++){
            mpp[str[i]]++;
        }

        int ans=-1;

        for(auto it:mpp){

            vector<int>hash(26,0);

            if(it.second>=3){

                int x=it.second;
                char ch=it.first;
                int i=0;
                int j=0;

             while(x){

                hash[ch-'a']=x;

                vector<int>hash1(26,0);
                int ct=0;
                i=0;
                j=0;
                while(i<n && j<n){

                    hash1[str[j]-'a']++;

                    if(j-i+1==x){
                        if(hash==hash1){
                            ct++;
                        }
                        hash1[str[i]-'a']--;
                        i++;
                    }
                    j++;
                }

                if(ct>=3){
                    ans=max(ans,x);
                }
                x--;
             }

            }
        }

        return ans;
        
    }
};