class Solution {
public:
    int findNumbers(vector<int>& arr) {
        
        int ct=0;

        for(int i=0;i<arr.size();i++){

            string temp=to_string(arr[i]);

            if(temp.size()%2==0){
                ct++;
            }
        }

        return ct;
    }
};