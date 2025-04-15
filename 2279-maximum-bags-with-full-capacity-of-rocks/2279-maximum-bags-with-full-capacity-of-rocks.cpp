class Solution {
public:
    typedef pair<int,int>p;
    int maximumBags(vector<int>& cap, vector<int>& roc, int add) {

        vector<int>v;

        for(int i=0;i<cap.size();i++){
            v.push_back(cap[i]-roc[i]);
        }

        int ct=0;

        sort(v.begin(),v.end());

        for(int i=0;i<v.size();i++){

            if(v[i]==0) ct++;

            else{
                if(add>=v[i]){
                    add-=v[i];
                    ct++;
                }
            }
        }

        return ct;
        
    }
};