class Solution {
public:
    typedef pair<int,int>p;
    vector<int> dailyTemperatures(vector<int>& arr) {

        stack<p>st;

        int n=arr.size();

        vector<int>ans(n,0);
        ans[n-1]=0;
        st.push({arr[n-1],n-1});

        for(int i=n-2;i>=0;i--){

            while(st.size()>0 && arr[i]>st.top().first){
                st.pop();
            }

            if(st.size()>0){
                int day=st.top().second;
                ans[i]=day-i;
            }

            else{
                ans[i]=0;
            }

            st.push({arr[i],i});
        }

        return ans;

        
    }
};