class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& arr1, vector<vector<int>>& arr2) {

        int i=0;
        int j=0;
        
        int n=arr1.size();
        int m=arr2.size();

        vector<vector<int>>ans;

        while(i<n && j<m){

            int id1=arr1[i][0];
            int val1=arr1[i][1];

            int id2=arr2[j][0];
            int val2=arr2[j][1];

            if(id1<id2){
                ans.push_back({id1,val1});
                i++;
            }
            else if(id1==id2){
                ans.push_back({id1,val1+val2});
                i++;
                j++;
            }
            else{
                ans.push_back({id2,val2});
                j++;
            }
        }


        while(i<n){
            ans.push_back({arr1[i][0],arr1[i][1]});
            i++;
        }

        while(j<m){
            ans.push_back({arr2[j][0],arr2[j][1]});
            j++;
        }


        return ans;

    }
};