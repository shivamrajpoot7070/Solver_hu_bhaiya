class Solution {
public:
    int maximumLength(string str) {

        

    unordered_map <string,int>mpp;

    for(int i=0;i<str.length();i++){
        string temp="";
        char last=str[i];
        for(int j=i;j<str.length();j++){

            if(str[j]==last){
                temp+=str[j];
                mpp[temp]++;
                last=str[j];
            }
            else{
                break;
            }
        }
    }

        int maxi=INT_MIN;

        for(auto it:mpp){
            if(it.second>=3){
                string temp=it.first;
                int n=temp.length();
                maxi=max(maxi,n);
            }
        }

        if(maxi==INT_MIN){
            return -1;
        }
    return maxi;
        
    }
};