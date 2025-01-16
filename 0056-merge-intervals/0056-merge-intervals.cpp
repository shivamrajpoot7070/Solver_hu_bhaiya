class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>&arr) {

       
       sort(arr.begin(), arr.end());

        vector<vector<int>> ans;

        // Initialize start and end with the first interval
        int st = arr[0][0];
        int ed = arr[0][1];

        for (int i = 1; i < arr.size(); i++) {
            int cs = arr[i][0]; // Current interval's start
            int cd = arr[i][1]; // Current interval's end

            if (cs <= ed) {
                // Overlapping intervals: update the end to the maximum
                ed = max(ed, cd);
            }
             else {
                // Non-overlapping interval: push the previous interval and reset
                ans.push_back({st, ed});
                st = cs;
                ed = cd;
            }
        }

        // Push the last interval
        ans.push_back({st, ed});

        return ans;
        
    }
};