class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int key) {


         int last=arr[0].size()-1;


        for(int i=0;i<arr.size();i++){

                int low=0;
                int high=last;

                while(low<=high){

                    int mid=(low+high)/2;

                    if(arr[i][mid]==key){
                        return true;
                    }

                    else if(arr[i][mid]<key){
                        low=mid+1;
                    }

                    else{

                        high=mid-1;
                    }
                }

        }

        return false;
        
    }
};