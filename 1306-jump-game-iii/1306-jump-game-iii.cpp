class Solution {
public:

    bool find(vector<int>& arr, int index,vector<int>&vis){

        if(index<0 || index>=arr.size() || vis[index]==1){
            return false;
        }

        if(arr[index]==0){
            return true;
        }

        vis[index]=1;

        bool aage=find(arr,index+arr[index],vis);

        bool piche=find(arr,index-arr[index],vis);


        return aage || piche;

    }

    bool canReach(vector<int>& arr, int st) {
        int n=arr.size();
        vector<int>vis(n,0);

        return find(arr,st,vis);
        
    }
};