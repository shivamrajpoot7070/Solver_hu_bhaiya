class Solution {
public:
    long long continuousSubarrays(vector<int>& arr) {



     int i = 0, j = 0, n = arr.size();
        long long ct = 0;

        pair<int, int> maxi = {arr[0], 0}; 
        pair<int, int> mini = {arr[0], 0}; 

        while (i < n && j < n) {
           
            if (arr[j] > maxi.first) {
                maxi = {arr[j], j};
            }
            if (arr[j] < mini.first) {
                mini = {arr[j], j};
            }

            
            if (maxi.first - mini.first > 2) {
                
                if (mini.second < maxi.second) {
                    i = mini.second + 1;
                } else {
                    i = maxi.second + 1;
                }

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
            }
             else {
                
                ct += j - i + 1;
            }

            
            j++;
        }

        return ct;



    
    }
};