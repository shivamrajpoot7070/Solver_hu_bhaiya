class Solution {
public:
    int missingInteger(vector<int>& arr) {

        if(arr.size()==1){
            return arr[0]+1;
        }

    unordered_map<int,int>mpp;


    for(int i=0;i<arr.size();i++){
        mpp[arr[i]]++;
    } 

    int sum=arr[0];
    int ans;


    for(int i=1;i<arr.size();i++){
        if(arr[i]==arr[i-1]+1){
            sum+=arr[i];
        }
        else{

           ans=sum;

           while(true){

            if(mpp.find(ans)==mpp.end()){
                return ans;
            }
            ans++;
           }
        }
    }

        return ans;

    }
};