class Solution {
public:
    int largestRectangleArea(vector<int>& arr) {
        int n=arr.size();
        vector<int>left(n);  // leftsmall
        vector<int>right(n);


        stack<int>st;

        for(int i=0;i<arr.size();i++){

            while(st.size()>0 && arr[i]<=arr[st.top()]){
                st.pop();
            }

            if(st.size()==0){
                left[i]=-1;
            }

            else{
                left[i]=st.top();
            }

            st.push(i);
        }

        while(st.size()>0){
            st.pop();
        }


        for(int i=n-1;i>=0;i--){

            while(st.size()>0 && arr[i]<=arr[st.top()]){
                st.pop();
            }

            if(st.size()==0){
                right[i]=n;
            }

            else{
                right[i]=st.top();
            }

            st.push(i);
        }

        int maxi=-1;

        for(int i=0;i<n;i++){

            int area=abs(left[i]-right[i])-1;
            area*=arr[i];

            maxi=max(maxi,area);
        }

        
        return maxi;
    }
};