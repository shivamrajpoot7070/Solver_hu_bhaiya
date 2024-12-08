class Solution {
public:
    vector<int> shortestToChar(string str, char c) { 

        vector<int>ans;
        int n=str.length();


        for(int i=0;i<str.length();i++){

            if(str[i]==c){
                ans.push_back(0);
            }

            else{

                int a=INT_MAX;
                int p=INT_MAX;

                for(int j=i+1;j<n;j++){
                    if(str[j]==c){
                        a=j;
                        break;
                    }   
                }

                for(int j=i-1;j>=0;j--){
                    if(str[j]==c){
                        p=j;
                        break;
                    }
                }

                int pidx=INT_MAX;
                int aidx=INT_MAX;

                if(a!=INT_MAX){
                    aidx=a-i;
                }

                if(p!=INT_MAX){
                    pidx=i-p;
                }

                int m=min(pidx,aidx);
                ans.push_back(m);
            }

        }

        return ans;
        
    }
};