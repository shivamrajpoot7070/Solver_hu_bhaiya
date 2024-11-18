class Solution {
public:
    bool isZeroArray(vector<int>& nums, vector<vector<int>>& que) {

        int ct=0;

        // for(int i=0;i<que.size();i++){

        //     int start=que[i][0];
        //     int end=que[i][1];

        //     for(int j=start;j<=end;j++){
        //         if(j>=0 && j<arr.size() && arr[j]>0){
        //             arr[j]--;

        //             if(arr[j]<=0){
        //                 ct++;
        //             }


        //             if(ct==arr.size()){
        //                 break;
        //             }
        //         }
        //     }

        // }

        // ct=0;

        

        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]==0){
        //         ct++;
        //     }

        // }

        // if(ct==arr.size()){

        //     return true;


        // }

        int n = nums.size();
        vector<int> sweep_line(n + 1, 0);

        for (auto it : queries) // q
        {
            sweep_line[it[0]] += 1;
            if (it[1] + 1 < n)
            {
                sweep_line[it[1] + 1] -= 1;
            }
        }

        for (int i = 1; i <= n; i++) // n
            sweep_line[i] += sweep_line[i - 1];
        
        int flag = 1;
        for (int i = 0; i < n; ++i) // n
        {
            if (sweep_line[i] < nums[i])
            {
                flag = 0;
            }
        }
        return flag == 1 ? true : false;


        
    }
};