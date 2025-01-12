class Solution {
public:
    string customSortString(string order, string s) {

        map<char,int>mpp;

        string ans="";

        for(int i=0;i<s.length();i++){
            mpp[s[i]]++;
        }

        for(int i=0;i<order.length();i++){

            if(mpp.find(order[i])!=mpp.end()){

                int t=mpp[order[i]];
                char x=order[i];

                while(t--){
                    ans+=x;
                }
                mpp.erase(order[i]);
            }
        }

        for(auto it:mpp){

            int x=it.second;
            char y=it.first;


            while(x--){
                ans+=y;
            }
        }

        return ans;

        
    }
};