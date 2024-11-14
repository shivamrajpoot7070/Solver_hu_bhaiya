class Solution {
public:
    int findLongestChain(vector<vector<int>>&arr) {


        if(arr.size()==1){
            return 1;
        }

        vector<pair<int,int>>v;

        for(int i=0;i<arr.size();i++){

            v.push_back({arr[i][1],arr[i][0]});

        }

        sort(v.begin(),v.end());
        int maxi=1;
        int ct=1;

        for(int i=0;i<v.size()-1;i++){
             ct=1;
            int el=v[i].first;
            for(int j=i+1;j<v.size();j++){

                int curr=v[j].second;

                if(curr>el){
                    el=v[j].first;
                    ct++;
                    maxi=max(maxi,ct);
                }
                else{
                    continue;
                }
            }
        }

        return maxi;

        



    }
};
