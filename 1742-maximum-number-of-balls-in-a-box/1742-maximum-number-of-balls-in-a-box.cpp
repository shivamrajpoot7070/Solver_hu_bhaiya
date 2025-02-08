class Solution {
public:
    int countBalls(int low, int high) {
        
        unordered_map<int,int>mpp;

        for(int i=low;i<=high;i++){

            string x=to_string(i);
            int num=0;
            for(int j=0;j<x.length();j++){
                num+=x[j]-'0';
            }
            mpp[num]++;
        }

        int maxi=0;


        for(auto it:mpp){
            maxi=max(maxi,it.second);
        }

        int ct=0;

        for(auto it:mpp){

            if(it.second==maxi){
                ct++;
            }
        }

        return maxi;

        
    }
};