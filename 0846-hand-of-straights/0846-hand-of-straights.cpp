class Solution {
public:
    bool isNStraightHand(vector<int>&arr, int siz) {

        if(arr.size()%siz!=0){
            return false;
        }

        // long long maxi=*max_element(arr.begin(),arr.end());

        // vector<long long>v(maxi+1,0);

        map<int,int>mpp;

        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }

        int tot=arr.size()/siz;
      
        for(int i=0;i<tot;i++){
            int ct=0;
            bool fst=true;
            int diff;
            for(auto it:mpp){

                if(fst){
                    diff=it.first;
                    mpp[it.first]--;
                    fst=false;
                    ct++;

                    if(mpp[it.first]==0){
                        mpp.erase(it.first);
                    }
                }
                else{

                    if((it.first-diff!=1)){
                        return false;
                    }
                    else{
                        ct++;
                        diff=it.first;
                        mpp[it.first]--;

                         if(mpp[it.first]==0){
                        mpp.erase(it.first);
                    }
                    } 
                }

                if(ct==siz){
                    break;
                }
            }

            if(ct<siz){
                return false;
            }

        }

        return true;
        
    }
};