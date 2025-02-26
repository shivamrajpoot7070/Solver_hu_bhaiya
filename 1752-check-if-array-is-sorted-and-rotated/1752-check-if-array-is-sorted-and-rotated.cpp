class Solution {
public:
    bool check(vector<int>& arr) {

        int rot=0;

        for(int i=1;i<arr.size();i++){

            if(arr[i]<arr[i-1]){
                rot++;
            }

            if(rot>1){
                return false;
            }
        }

        if(rot==0){
            return true;
        }

        if(arr[0]<arr[arr.size()-1]){
            return false;
        }
        return true;
    }
};