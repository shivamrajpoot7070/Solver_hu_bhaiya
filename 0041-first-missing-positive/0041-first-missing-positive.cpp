class Solution {
public:
    int firstMissingPositive(vector<int>& arr) {

        set<int>st;

        for(int i=0;i<arr.size();i++){
            st.insert(arr[i]);
        }


        int maxi=*max_element(arr.begin(),arr.end());

        for(int i=1;i<=maxi;i++){

            if(st.find(i)==st.end()){
                return i;
            }
        }

        if(maxi+1<=0){
            return 1;
        }

        return maxi+1;
        

    }
};