class Solution {
public:
    int longestConsecutive(vector<int>&arr) {

        unordered_set<int>st;

        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }

        int maxi=0;

        for(int num:arr){

            if(st.find(num-1)==st.end()){
                int curr=num;
                int streak=0;

                while(st.find(num)!=st.end()){
                    streak++;
                    num++;
                }
                maxi=max(maxi,streak);
            }
        }

        return maxi;
        
    }
};