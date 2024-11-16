class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& arr1, vector<int>& arr2) {

        unordered_map <int,int>mpp1;
        unordered_map <int,int>mpp2;


            for(int i=0;i<arr1.size();i++){

                mpp1[arr1[i]]++;

            }

            for(int i=0;i<arr2.size();i++){

                mpp2[arr2[i]]++;
            }

            vector<vector<int>>ans;
            vector<int>temp;

            for(auto it:mpp1){

                int ele=it.first;

                if(mpp2.find(ele)==mpp2.end()){
                    temp.push_back(ele);
                }  
            }

            ans.push_back(temp);

            temp.clear();

            for(auto it:mpp2){

                int ele=it.first;

                if(mpp1.find(ele)==mpp1.end()){

                    temp.push_back(ele);

                }
            }

            ans.push_back(temp);

            return ans;

        
    }
};