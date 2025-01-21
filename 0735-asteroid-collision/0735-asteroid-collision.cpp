class Solution {
public:
    vector<int> asteroidCollision(vector<int>& arr) {

        vector<int> ans;

        stack<int>st;

        for (int i = 0; i < arr.size(); i++) {

            bool flag=true;

            while(st.size()>0 && st.top()>0 && arr[i]<0){

                int dir=st.top()+arr[i];

                if(dir<0){  // left qki jo aaya number wo -ve bhi tha or top se bda bhi to dleete krte jyga top ko
                    st.pop();
                }

                else if(dir>0){  // agr top wla bda hai aage wle to kuch na kro bs neg ko ignore kr do
                    flag=false;
                    break;
                }
                else{
                    st.pop();
                    flag=false;
                    break;
                }
            }


            if(flag){
                st.push(arr[i]);
            }
        }


        while(st.size()>0){

            ans.push_back(st.top());
            st.pop();
        }

        reverse(ans.begin(),ans.end());

        return ans;
    }
};