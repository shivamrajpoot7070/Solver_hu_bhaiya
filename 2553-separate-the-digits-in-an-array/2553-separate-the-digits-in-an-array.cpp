class Solution {
public:
    vector<int> separateDigits(vector<int>& arr) {

        vector<int>ans;


        for(int i=0;i<arr.size();i++){


            string str=to_string(arr[i]);


            for(int i=0;i<str.length();i++){
                ans.push_back(str[i]-'0');
            }

        }

        return ans;


        
    }
};