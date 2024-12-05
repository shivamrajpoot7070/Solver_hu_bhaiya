class Solution {
public:
    bool canChange(string start, string tar) {

         int n=start.length();

        // for(int i=0;i<tar.length();i++){

        //     if(tar[i]!='_' && tar[i]!=start[i]){


        //         if(tar[i]=='L'){

        //             int k=i;
        //             bool flag=true;

        //             while( k<n && flag){

        //                 if(start[k]=='R'){
        //                     return false;
        //                 }

        //                 if(start[k]=='L'){
        //                     swap(start[i],start[k]);
        //                     flag=false;
        //                 }
        //                 k++;
        //             }
        //         }
        //     }
        // }

        // for(int i=tar.length()-1;i>=0;i--){


        //     if(tar[i]!='_' && tar[i]!=start[i]){


        //         if(tar[i]=='R'){

        //             int k=i;
        //             bool flag=true;

        //             while(k>=0 && flag){

        //                 if(start[k]=='L'){
        //                     return false;
        //                 }

        //                 if(start[k]=='R'){
        //                     swap(start[i],start[k]);
        //                     flag=false;
        //                 }
        //                 k--;
        //             }
        //         }


        //     }
        // }

        // cout<<start;

        // if(start==tar){
        //     return true;
        // }


        // return false;

        int i=0;
        int j=0;


        while(i<n || j<n){

            while(i<n && start[i]=='_'){
                i++;
            }

            while(j<n && tar[j]=='_'){
                j++;
            }

            if(i==n && j==n){
                break;
            }

            if(start[i]!=tar[j]){
                return false;
            }


            if(start[i]=='R'){  // agr ryt aage chla gya j se to pkka piche ni aa pyga
                if(i>j){   // piche nai aa skta
                    return false;
                }
            }

            if(start[i]=='L'){
                if(i<j){   // aage nai ja skta
                    return false;
                }
            }

            i++;
            j++;

        }

        return i==n && j==n;

        

        
    }
};