class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& arr) {

        sort(arr.begin(), arr.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });

        
        int ct=0;

        int currend=arr[0][1];


        for(int i=1;i<arr.size();i++){
            
            int start=arr[i][0];
            int end=arr[i][1];

            if(currend>start){
                ct++;
            }

            else{
                currend=end;
            }

        }

        return ct;
        
    }
};