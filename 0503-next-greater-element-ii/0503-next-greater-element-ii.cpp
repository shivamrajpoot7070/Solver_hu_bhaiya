class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& arr) {


        int n=arr.size();

        for(int i=0;i<n;i++){
            arr.push_back(arr[i]);
        }
        int m=arr.size();

        stack<int>st;

        vector<int>ans(m);

        st.push(arr[m-1]);

        ans[m-1]=-1;

        for(int i=m-2;i>=0;i--){


            while(st.size()>0 && arr[i]>=st.top()){
                st.pop();
            }

            if(st.size()>0){
                ans[i]=st.top();
            }

            else{
                ans[i]=-1;
            }

            st.push(arr[i]);
        }
        

        for(int i=0;i<n;i++){
            ans.pop_back();
        }

        return ans;
        
    }
};