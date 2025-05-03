class Solution {
public:
    int minDominoRotations(vector<int>& top, vector<int>& bottom) {
        
        map<int,int>mpp;
        int n=top.size();

        for(int i=0;i<n;i++){
            if(top[i]==bottom[i]){
                mpp[top[i]]++;
            }
            else{
                mpp[top[i]]++;
                mpp[bottom[i]]++;
            }
        }


        vector<int>count;

        for(auto it:mpp){
            if(it.second==n){
                count.push_back(it.first);
            }
        }

        if(count.size()==0) return -1;


        int swap=0;
        int minswap=INT_MAX;
        for(int i=0;i<count.size();i++){

            int ele=count[i];

            for(int i=0;i<n;i++){

                if(top[i]!=ele){

                    if(bottom[i]==ele){
                        swap++;
                    }
                    else{
                        swap=0;
                        break;
                    }
                }
            }

            minswap=min(minswap,swap);
        }

        return minswap;
    }
};