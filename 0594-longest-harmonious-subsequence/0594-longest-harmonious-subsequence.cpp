class Solution {
public:
    int findLHS(vector<int>&arr) {


        unordered_map <int,int>mpp;


        for(int i=0;i<arr.size();i++){
            mpp[arr[i]]++;
        }


        int len=0;


        for(auto it:mpp){

            int count=it.second;
            int num=it.first;


            if(mpp.find(num+1)!=mpp.end()){

                len=max(len,count+mpp[num+1]);

            }

        }


        return len;



    }
};