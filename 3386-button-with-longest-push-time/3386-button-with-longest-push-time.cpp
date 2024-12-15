class Solution {
public:
    int buttonWithLongestTime(vector<vector<int>>& arr) {

        int index=arr[0][0];

        int maxi=arr[0][1];


        for(int i=1;i<arr.size();i++){

            int curv=arr[i][1];
            int ind=arr[i][0];

            int prev=arr[i-1][1];

            if(curv-prev>maxi){
                index=ind;
                maxi=curv-prev;
            }
            if(curv-prev==maxi){
                index=min(index,ind);
            }
        }

        return index;
        
    }
};