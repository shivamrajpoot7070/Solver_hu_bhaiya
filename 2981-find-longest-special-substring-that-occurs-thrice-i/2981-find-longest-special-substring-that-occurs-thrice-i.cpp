class Solution {
public:
    int maximumLength(string str) {


    //     map<char,int>mpp;

    //     for(int i=0;i<str.length();i++){
    //         mpp[str[i]]++;
    //     }

    //     bool valid=false;
    //     bool inv=false;

    //     for(auto it:mpp){
    //         if(it.second>=2){
    //             valid=true;
    //         }
    //     }

    //     if(!valid){
    //         return -1;
    //     }

    //     int maxi=INT_MIN;


    //     // jitna bhi letter 3 baar se jyda aaya usko check kr lenge
    //     // har window size ke liy agr utne size ka subarray 3 baar present hai to 
    //    // thik nai to usse bda

    //     for (auto it = mpp.rbegin(); it != mpp.rend(); ++it) {

    //         if(it->second>=3){  

    //             char ch=it->first;
    //             int size=it->second;
    //             int till=1;

    //             while(till<size){  //  
    //                 int j=0;
    //                 int ct=0;
    //                 int i=0;
    //                 while(j<str.length()){

    //                     if(j-i+1==till){    // for every size till max occurence of any letter
    //                         bool flag=true;
    //                         for(int k=i;k<=j;k++){
    //                             if(str[k]!=ch){
    //                                 flag=false;
    //                                 break;
    //                             }
    //                         }

    //                         if(flag){
    //                             ct++;
    //                         }

    //                         i++;
    //                     }
    //                     j++;
                        
    //                 }

    //                 if(ct>=3){
    //                     maxi=max(maxi,till);
    //                 }
    //                 else{      // agr 1 size ka ni bna rha 3 subarray to  2 ka to pkka ni bnayga isly break
    //                     break;
    //                 }

    //                 till++;
            
    //             }
    //         }
    // }

    // if(maxi==INT_MIN){
    //     return -1
    // }
    
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