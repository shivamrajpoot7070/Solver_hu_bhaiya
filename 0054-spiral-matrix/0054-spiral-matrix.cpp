class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>&arr) {

        int n=arr.size();
        int m=arr[0].size();

        int left=0;
        int right=m-1;

        int top=0;
        int down=n-1;

        // left to right top me

        vector<int>ans;

    while(top<=down && left<=right){

        for(int i=left;i<=right;i++){
            ans.push_back(arr[top][i]);
        }
        top++;

        // top to down
        for(int i=top;i<=down;i++){
            ans.push_back(arr[i][right]);
        }

        right--;

        // right to left down
    
    if(top<=down){

        for(int i=right;i>=left;i--){
            ans.push_back(arr[down][i]);
        }

        down--;
    }
    
    if(left<=right){

        for(int i=down;i>=top;i--){
            ans.push_back(arr[i][left]);
        }

        left++;

    }
    }

    return ans;
    }
};