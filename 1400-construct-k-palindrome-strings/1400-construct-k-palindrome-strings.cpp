class Solution {
public:
    bool canConstruct(string str, int k) {

        unordered_map <char,int>mpp;


        for(int i=0;i<str.length();i++){
            mpp[str[i]]++;
        }

        int odd=0;


        for(auto it:mpp){

            if(it.second%2!=0){
                odd++;
            }
        }


        return odd<=k;


        
    }
}; 