class Solution {
public:
    vector<bool> isArraySpecial(vector<int>& arr, vector<vector<int>>& que) {

        vector<bool>ans;

        for(int i=0;i<que.size();i++){

            int st=que[i][0];
            int ed=que[i][1];
            bool flag=true;

            for(int j=st+1;j<=ed;j++){

                if((arr[j]%2==0 && arr[j-1]%2!=0) || (arr[j]%2!=0 && arr[j-1]%2==0)){
                    continue;
                }
                else{
                    
                    flag=false;
                }
            }

            if(flag){
                ans.push_back(true);
            }
            else{
                ans.push_back(false);
            }
        }

        return ans;
        
    }
};