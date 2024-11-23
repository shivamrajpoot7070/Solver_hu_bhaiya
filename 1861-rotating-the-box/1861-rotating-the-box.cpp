class Solution {
public:
    vector<vector<char>> rotateTheBox(vector<vector<char>>& box) {


        int row=box.size();
        int col=box[0].size();


        for(int i=0;i<row;i++){

            for(int j=0;j<col;j++){


                if(box[i][j]=='.'){
                    int k=i;
                    int l=j;

                    while(l>0 && box[k][l-1]!='*'){
                        swap(box[k][l],box[k][l-1]);
                        l--;
                    }
                }
            }
        }

        vector<vector<char>>ans(col,vector<char>(row));


        for(int i=0;i<box.size();i++){
            for(int j=0;j<box[i].size();j++){
                ans[j][row - i - 1] = box[i][j];
            }
        }


        return ans;

        


        
    }
};