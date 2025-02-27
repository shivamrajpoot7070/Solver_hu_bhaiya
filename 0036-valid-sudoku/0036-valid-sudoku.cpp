class Solution {
public:

    

    bool isValidSudoku(vector<vector<char>>& arr) {

        set<string>st;
        for(int i=0;i<arr.size();i++){
            for(int j=0;j<arr.size();j++){

                if(arr[i][j]!='.'){
                    string row=string(1,arr[i][j])+"_ROW_"+to_string(i);
                    string col=string(1,arr[i][j])+"_COLUMN_"+to_string(j);
                    string box=string(1,arr[i][j])+"_BOX_"+to_string(i/3)+to_string(j/3);


                    if(st.find(row)!=st.end() || st.find(col)!=st.end() || st.find(box)!=st.end()){
                        return false;
                    }


                    st.insert(row);
                    st.insert(col);
                    st.insert(box);
                }
            
            }
        }

        return true;
    }
};