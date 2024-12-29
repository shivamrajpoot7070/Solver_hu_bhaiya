class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& arr) {


        int max_now=arr[0]+0;
        int maxi=INT_MIN;


        for(int i=1;i<arr.size();i++){

            int x=arr[i]-i;
            int y=max_now;

            maxi=max(maxi,y+x);

            max_now=max(max_now,arr[i]+i);


        }

        return maxi;
        
    }
};