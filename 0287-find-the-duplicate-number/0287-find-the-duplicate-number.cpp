class Solution {
public:
    int findDuplicate(vector<int>& arr) {


        int slow=arr[0];
        int fast=arr[0];


        slow=arr[slow];    // suru me hi 1 step slow
        fast=arr[arr[fast]];  // or fast 2 step index wise


        while(slow!=fast){
            slow=arr[slow];
            fast=arr[arr[fast]];
        }

        slow=arr[0];

        while(slow!=fast){  // 1-1 step
            slow=arr[slow];  
            fast=arr[fast];
        }

        return fast;
        
    }
};