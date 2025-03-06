class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& arr) {

        int n=arr.size();
        n=n*n;
        int tsum=(n*(n+1))/2;

        set<int>st;

        int a;
        int b;


        int prsum=0;


        for(int i=0;i<arr.size();i++){

            for(int j=0;j<arr[i].size();j++){

                 if(st.find(arr[i][j])!=st.end()){
                    a=arr[i][j];
                 }
                 else{
                    st.insert(arr[i][j]);
                    prsum+=arr[i][j];
                 } 
            }
        }

        cout<<tsum<<" "<<prsum<<" ";
        b=tsum-prsum;

        return {a,b};

        

        
    }
};