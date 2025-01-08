class Solution {
public:
    int countPrefixSuffixPairs(vector<string>& arr) {

        int ct=0;

        for(int i=0;i<arr.size();i++){

            string word=arr[i];

            for(int j=i+1;j<arr.size();j++){

                if(arr[j].length()<word.length()){
                    continue;
                }

                else{

                    bool f1=true;
                    bool f2=true;

                    string wo=arr[j];

                    for(int k=0;k<word.length();k++){
                        if(word[k]!=wo[k]){
                            f1=false;
                        }
                    }

                    int st=wo.length()-word.length();
                    int ind=0;

                    for(int k=st;k<=wo.length();k++){
                        if(word[ind]!=wo[k]){
                            f2=false;
                        }
                        ind++;
                    }


                    if(f1&&f2){
                        ct++;
                    }
                }

            }


        }

        return ct;


        
    }
};