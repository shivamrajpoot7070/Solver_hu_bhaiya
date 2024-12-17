class Solution {
public:
    typedef pair<char,int>p;
    string repeatLimitedString(string arr, int limit) {

         unordered_map<char, int> mpp;

        // Count the frequency of each character
        for (char c : arr) {
            mpp[c]++;
        }

        priority_queue<p> pq;

        string ans="";

        for (auto it : mpp) {
            pq.push({it.first, it.second});
        }

        while(pq.size()>0){

            int ct=pq.top().second;
            char ch=pq.top().first;
            pq.pop();

            if(ct>limit){

                for(int i=0;i<limit;i++){
                    ans+=ch;
                }

                if(pq.size()>0){
                    char c=pq.top().first;
                    ans+=c;
                    int n=pq.top().second;
                    pq.pop();

                    if(n>=2){
                        pq.push({c,n-1});
                    }
                }
                else{
                    return ans;
                }

                ct=ct-limit;
                if(ct>=1){
                    pq.push({ch,ct});
                }
                
            }

            else{

                for(int i=0;i<ct;i++){
                    ans+=ch;
                }
            }  
        }


        return ans;
        

        
    }
};