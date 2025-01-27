class Solution {
public:
    bool find(vector<int>& arr,int idx){


        if(idx>=arr.size()-1){
            return true;
        }

        if(arr[idx]==0){
            return false;
        }

        bool take=find(arr,arr[idx]+idx);
        bool ntake=find(arr,idx+1);

        return take || ntake;



    }
    bool canJump(vector<int>& arr) {

        int idx=0;

        return find(arr,idx);
        
    }
};