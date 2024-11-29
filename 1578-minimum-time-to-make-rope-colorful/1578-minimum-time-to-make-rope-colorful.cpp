class Solution {
public:
    int minCost(string col, vector<int>& time) {


        stack<int>st;
        int ans=0;



        for(int i=0;i<col.length();i++){


            if(st.size()>0 && col[st.top()]==col[i]){


                if(time[st.top()]<time[i]){
                    ans+=time[st.top()];
                    st.push(i);
                }

                else{
                    ans+=time[i];
                }

                
            }

            else{
                
                st.push(i);
            }
        }


        return ans;





        
    }
};