class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {

        stack<int>st;


        for(int i=0;i<arr.size();i++){

            if(arr[i]>0){
                st.push(arr[i]);
            }

            else{

                while(st.size()>0 && st.top()>0 && abs(arr[i])>st.top()){
                    st.pop();
                }

                if(st.size()==0) {
                    st.push(arr[i]);
                }

                else{
                    if(st.top()<=0) st.push(arr[i]);

                    else{
                        
                        if(st.top()==abs(arr[i])){
                            st.pop();
                        }
                    }
                }
            }
        }

        vector<int>ans;

        while(st.size()>0){
            ans.push_back(st.top());
            st.pop();
        } 

        reverse(ans.begin(),ans.end());  

        return ans;

    }
};