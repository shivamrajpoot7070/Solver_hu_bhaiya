class Solution {
public:
    vector<string> wordSubsets(vector<string>& arr1, vector<string>& arr2) {

        vector<string>ans;
        
        vector<int>maxfreq(26,0);

        for(int i=0;i<arr2.size();i++){

            string temp1=arr2[i];
            vector<int>hash1(26,0);

            for(int k=0;k<temp1.length();k++){
                hash1[temp1[k]-'a']++;
            } 

            for(int k=0;k<26;k++){
                maxfreq[k]=max(maxfreq[k],hash1[k]);
            }
        }

            for(int i=0;i<arr1.size();i++){

                    vector<int>hash2(26,0);
                    string temp2=arr1[i];
                    bool flag=true;

                    for(int k=0;k<temp2.length();k++){
                        hash2[temp2[k]-'a']++;
                    }

                    for(int l=0;l<26;l++){
                        if(hash2[l]<maxfreq[l]){
                            flag=false;
                            break;
                        }
                    }

                    if(flag){
                        ans.push_back(arr1[i]);
                    }
            }

            

        return ans;
        
    }
};