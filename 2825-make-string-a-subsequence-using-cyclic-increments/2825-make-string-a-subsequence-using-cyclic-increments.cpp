class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {

    //     map <char,int>mpp;

    //     for(int i=0;i<str1.length();i++){
    //         mpp[str1[i]]=i;
    //     }

    //   //  reverse(mpp.begin(),mpp.end());

    //     int seq=-1;

    //     for(int i=0;i<str2.length();i++){

    //         char ch=str2[i];
    //         bool flag=true;

    //         char prev;

    //         if(ch=='a'){
    //             prev='z';
    //         }
    //         else{
    //             prev=ch-1;
    //         }


    //         if(mpp.find(ch)!=mpp.end() && mpp[ch]>seq){
    //             //seq=mpp[ch];
    //             //mpp.erase(ch);
    //             int mini=INT_MAX;

    //             for(auto it:mpp){
    //                 if(it.first==ch){
    //                     mini=min(mini,it.second);
    //                 }
    //             }

    //             seq=mini;

    //             for(auto  it:mpp){
    //                 if(it.second==seq){
    //                     mpp.erase(it.first);
    //                 }
    //             }
    //         }

    //         else if(mpp.find(prev)!=mpp.end()){

    //             if(mpp[prev]>seq){
    //                 seq=mpp[prev];
    //                //mpp.erase(prev);
    //             } 

    //             else{

    //                 return false;
    //             }
    //         }
        
    //         else{
    //             return false;
    //         }

    //     }


    //     return true;

    int n=str1.length();
    int m=str2.length();
    int i=0;
    int j=0;


    while(i<n && j<m){


        if(str1[i]==str2[j]){
            i++;
            j++;
        }


        else{

            char ch=str2[j];
            if(ch=='a'){
                ch='z';
            }
            else{
                ch=ch-1;
            }
        
            if(str1[i]==ch){
                i++;
                j++;
            }

            else{
                i++;
            }
        }


    }

    if(j==m){
        return true;
    }


    return false;



        
    }
};