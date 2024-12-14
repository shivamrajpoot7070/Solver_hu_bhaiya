class Solution {
public:
    long long continuousSubarrays(vector<int>& arr) {

    //     int i=0;
    //     int j=0;

    //     pair<int,int>maxi;
    //     pair<int,int>mini;
    //     int n=arr.size();

    //    maxi.first=arr[0];
    //    maxi.second=0;

    //    mini.first=arr[0];
    //    mini.second=0;
    //    int ct=0;

    //     while(i<n && j<n){

    //         if(arr[j]>maxi.first){
    //             maxi.second=j;
    //             maxi.first=arr[j];
    //         }

    //         if(arr[j]<mini.first){
    //             mini.second=j;
    //             mini.first=arr[j];
    //         }

    //        if(maxi.first-mini.first>2){

    //             int x=-1;

    //             if(mini.second<maxi.second){
    //                 i=mini.second+1;
    //                 mini.first=INT_MAX;
    //             }
    //             else{
    //                 i=maxi.second+1;
    //                 maxi.first=INT_MIN;
    //             }


    //         for(int k=i;k<=j;k++){

    //             if(arr[j]>maxi.first){
    //             maxi.second=k;
    //             maxi.first=arr[k];
    //             }

    //            if(arr[k]<mini.first){
    //             mini.second=k;
    //             mini.first=arr[k];
    //             }
    //         }

    //         j--;  
    //         }

    //         else{
    //             ct+=j-i+1;
    //         }
    //         j++;

    //     }

    //     return ct;


     int i = 0, j = 0, n = arr.size();
        long long ct = 0;

        pair<int, int> maxi = {arr[0], 0}; // Maxi: {value, index}
        pair<int, int> mini = {arr[0], 0}; // Mini: {value, index}

        while (i < n && j < n) {
            // Update max and min for the current element
            if (arr[j] > maxi.first) {
                maxi = {arr[j], j};
            }
            if (arr[j] < mini.first) {
                mini = {arr[j], j};
            }

            // If the condition is violated, shrink the window
            if (maxi.first - mini.first > 2) {
                // Move i to the right of the smaller index between maxi and mini
                if (mini.second < maxi.second) {
                    i = mini.second + 1;
                } else {
                    i = maxi.second + 1;
                }

                // Recalculate max and min within the new window
                maxi = {INT_MIN, -1};
                mini = {INT_MAX, -1};
                for (int k = i; k <= j; k++) {
                    if (arr[k] > maxi.first) {
                        maxi = {arr[k], k};
                    }
                    if (arr[k] < mini.first) {
                        mini = {arr[k], k};
                    }
                }
                j--;
            } else {
                // Count subarrays ending at j
                ct += j - i + 1;
            }

            // Expand the window
            j++;
        }

        return ct;



    
    }
};