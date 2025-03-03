class Solution {
public:
    bool isNStraightHand(vector<int>& arr, int group) {

        map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        int ct=group;

        while(mpp.size()>0){

            int card=0;
            int fir=-1;

            for(auto it:mpp){

                int ele=it.first;

                if(fir==-1){
                    fir=ele;
                }
                else{
                    if(ele-fir!=1){
                        return false;
                    }
                    else{
                        fir=ele;
                    }
                }
                
                mpp[ele]--;

                if(mpp[ele]==0){
                    mpp.erase(ele);
                }
                card++;
                if(card==ct){
                    break;
                }
            }

            if(card<ct){
                return false;
            }
        }

        return true;
    }
};