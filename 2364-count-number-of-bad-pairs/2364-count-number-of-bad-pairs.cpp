class Solution {
public:
    long long countBadPairs(vector<int>&arr) {

            long long ct=0;
            unordered_map<int,int>mpp;

            mpp[arr[0]-0]++;

            for(int j=1;j<arr.size();j++){

                int fi=arr[j]-j;

                

                    for(auto it:mpp){
                        if(it.first!=fi){
                            ct+=it.second;
                        }
                    }
            
                mpp[fi]++;
            }

            return ct;

    }
};

