class Solution {
public:

    bool rowcheck(vector<vector<char>>& arr,int i,int row_ele_ct,unordered_map<char,int>row){

        for(int j=0;j<9;j++){
            
            if(arr[i][j]!='.'){
                row[arr[i][j]]++;
                row_ele_ct+=row[arr[i][j]];
            }
        }

        if(row.size()!=row_ele_ct){
            return false;
        }

        return true;
    }

    
    bool colcheck(vector<vector<char>>& arr,int j,int col_ele_ct,unordered_map<char,int>col){


        for(int i=0;i<9;i++){
            if(arr[i][j]!='.'){
                col[arr[i][j]]++;
                col_ele_ct+=col[arr[i][j]];
            }
        }

        if(col.size()!=col_ele_ct){
            return false;
        }

        return true;
    }


    bool isValidSudoku(vector<vector<char>>& arr) {
        

        for(int i=0;i<arr.size();i++){
            int row_ele_ct=0;
            int col_ele_ct=0;
            unordered_map<char,int>row;
            unordered_map<char,int>col;

            if(rowcheck(arr,i,row_ele_ct,row)==false){
                    return false;
            }

            for(int j=0;j<arr[i].size();j++){
                
                if(colcheck(arr,j,col_ele_ct,col)==false){
                    return false;
                }
            }
        }

        return true;
    }
};