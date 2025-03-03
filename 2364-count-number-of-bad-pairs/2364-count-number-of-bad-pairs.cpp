class Solution {
public:
    long long countBadPairs(vector<int>& arr) {

        unordered_map<long long,long long>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]-i]++;
        }


        long long ct=0;
        int n=arr.size();

        for(int i=0;i<arr.size();i++){

            long long diff=arr[i]-i;

            mpp[diff]--;

            if(mpp[diff]==0){
                mpp.erase(diff);
            }


            if(mpp.find(diff)==mpp.end()){
                ct+=(n-i)-1;
            }
            else{

                long long extra=mpp[diff];
                ct+=((n-i)-1)-extra;
            }
        }

        return ct;
        

    }
};