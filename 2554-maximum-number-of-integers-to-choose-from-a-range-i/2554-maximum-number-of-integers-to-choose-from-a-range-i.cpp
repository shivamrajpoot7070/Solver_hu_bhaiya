class Solution {
public:
    int maxCount(vector<int>& arr, int n, int maxi) {



        set<int>st;

        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }

        int ct=0;
        int sum=0;

        for(int i=1;i<=n;i++){

            if(st.find(i)==st.end() && sum+i<=maxi){
                sum+=i;
                ct++;
            }


        }

        return ct;


    }
};