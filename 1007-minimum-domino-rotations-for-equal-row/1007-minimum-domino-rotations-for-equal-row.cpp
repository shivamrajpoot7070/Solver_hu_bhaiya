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
        int ele;

        for(auto it:mpp){
            if(it.second==n){
                ele=it.first;
            }
        }

        //if(count.size()==0) return -1;


        int swap=0;
        int minswaptop=INT_MAX;
        int minswapbot=INT_MAX;

        // for(int i=0;i<count.size();i++){

            // ele=count[i];

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

            minswaptop=min(minswaptop,swap);

        swap=0;

        //  for(int i=0;i<count.size();i++){

        //     int ele=count[i];

            for(int i=0;i<n;i++){

                if(bottom[i]!=ele){

                    if(top[i]==ele){
                        swap++;
                    }
                    else{
                        swap=0;
                        break;
                    }
                }
            }

            minswapbot=min(minswapbot,swap);

        

        

        if(min(minswaptop,minswapbot)==0) return -1;

        else{
            return min(minswaptop,minswapbot);
        }

    }
};