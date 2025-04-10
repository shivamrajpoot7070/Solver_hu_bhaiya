class Solution {
public:
    int minOperations(vector<int>& arr, int k) {
        
        unordered_map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        sort(arr.begin(),arr.end(),greater<int>());

        for(int x:arr){
            if(x<k){
                return -1;
            }
        }

        int ct=0;
        for(int i=0;i<arr.size();i++){

            if(mpp.find(arr[i])!=mpp.end()){

                int n=arr[i]-1;
                while(mpp.find(n)==mpp.end() && n>=1){
                    n--;
                }

                if(n==0){
                    if(mpp.size()==1){

                        for(auto it:mpp){
                            if(it.first==k){
                                return ct;
                            }
                            else{
                                return ct+1;
                            }
                        }
                    }
                    else{
                        return -1;
                    }
                }
                ct++;
                int ctofn=mpp[n];
                int ctofcurr=mpp[arr[i]];

                mpp[n]=ctofn+ctofcurr;

                mpp.erase(arr[i]);
            }
            else{
                continue;
            }
        }

        return ct;

    }
};