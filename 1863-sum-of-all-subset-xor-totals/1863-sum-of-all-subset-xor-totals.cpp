class Solution {
public:
    void gen(vector<int>&temp,int i,vector<int>&arr,vector<vector<int>>&v){

        if(i>=arr.size()){
            v.push_back(temp);
            return;
        }

        temp.push_back(arr[i]);
        gen(temp,i+1,arr,v);
        temp.pop_back();
        gen(temp,i+1,arr,v);
    }

    int subsetXORSum(vector<int>&arr) {
        int sum=0;
        vector<vector<int>>v;
        vector<int>temp;
        int i=0;
        gen(temp,i,arr,v);

        for(int i=0;i<v.size();i++){
            int tempp=0;
            for(int j=0;j<v[i].size();j++){
                cout<<v[i][j]<<" ";
                tempp=tempp^v[i][j];
            }
            cout<<"\n";
            sum+=tempp;
        }
        
        return sum;

    }
};