class Solution {
public:
    int garbageCollection(vector<string>& arr, vector<int>& travel) {

        int gt=0;
        int pt=0;
        int mt=0;


        int gi=-1;
        int pi=-1;
        int mi=-1;

        for(int i=0;i<arr.size();i++){

            string str=arr[i];

            unordered_map<char,int>mpp;

            for(int j=0;j<str.length();j++){
                mpp[str[j]]++;
            }

            if(mpp.find('G')!=mpp.end()){
                gt+=mpp['G'];
                gi=i;
            }

            if(mpp.find('P')!=mpp.end()){
                pt+=mpp['P'];
                pi=i;
            }

            if(mpp.find('M')!=mpp.end()){
                mt+=mpp['M'];
                mi=i;
            }
        }

        int n=travel.size();

        vector<int>ps(n,0);

        ps[0]=travel[0];

        for(int i=1;i<n;i++){
            ps[i]=travel[i]+ps[i-1];
        }


        if(mi>0){
            mt+=ps[mi-1];
        }

        if(gi>0){
            gt+=ps[gi-1];
        }

         if(pi>0){
            pt+=ps[pi-1];
        }

        // if(mi>0 && pi>0 && gi>0){
            
        //     pt+=ps[pi-1];
        //     gt+=ps[gi-1];
        // }



        return mt+pt+gt;
        
    }
};