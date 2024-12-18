class Solution {
public:
    vector<int> finalPrices(vector<int>& arr) {

        int n=arr.size();

        vector<int>dis(n);

        dis[n-1]=arr[n-1];

        stack<int>st;

        st.push(arr[n-1]);

        vector<int>ans(n);

        ans[n-1]=arr[n-1];


        for(int i=n-2;i>=0;i--){

            while(st.size()>0 && arr[i]<st.top()){
                st.pop();
            }

            if(st.size()==0){
                ans[i]=arr[i]-0;
            }

            else{
                ans[i]=arr[i]-st.top();
            }


            st.push(arr[i]);
        }

        return ans;
    }
};