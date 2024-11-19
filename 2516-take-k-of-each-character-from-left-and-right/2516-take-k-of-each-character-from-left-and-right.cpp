class Solution {
public:
    int takeCharacters(string str, int k) {


    //     int len=str.length();

    //     if(k==0){
    //         return 0;
    //     }

    //     if(len<3){
    //         return -1;
    //     }


    //     int mid=len/2;

    //     int mini=INT_MAX;
        


    // while(mid>=0){

    //         int ac=0;
    //         int bc=0;
    //         int cc=0;
    //         int lenf=0;
    //         int lenb=0;
    //         bool aage=false;

    //         for(int i=0;i<=mid;i++){

    //             if(str[i]=='a'){
    //                 ac++;
    //             }

    //             if(str[i]=='b'){
    //                 bc++;
    //             }

    //             if(str[i]=='c'){
    //                 cc++;
    //             }


    //             if(ac>=k && bc>=k && cc>=k){
    //                 lenf=i;
    //                 aage=true;
    //                 break;
    //             }

    //         }

    //         if(aage){
    //             mini=min(mini,lenf);
    //         }

    //     else{
    //         lenf=mid+1;
    //         for(int j=len-1;j>mid;j--){

    //             if(str[j]=='a'){

    //                 if(ac>=k){
    //                     lenf--;
    //                 }
    //                 ac++;
    //                 lenf--;
    //             }
    //             if(str[j]=='b'){
    //                 bc++;

    //             }
    //             if(str[j]=='c'){
    //                 cc++;

    //             }


    //             if(ac>=k && bc>=k && cc>=k){
    //                 int length=lenf+(len-j);
    //                 mini=min(mini,length);
    //                 break;
    //             }

    //         }

    //     }

    //     mid--;

    // }

    // if(mini==INT_MAX){
    //     return -1;
    // }


    // return mini;

    int len = str.length();
        if (k == 0) return 0;

        // Count total occurrences of each character
        int totalA = 0, totalB = 0, totalC = 0;
        for (char ch : str) {
            if (ch == 'a') totalA++;
            if (ch == 'b') totalB++;
            if (ch == 'c') totalC++;
        }

        // If it's not possible to take k of each character
        if (totalA < k || totalB < k || totalC < k) return -1;

        // Target counts for a, b, c in the window
        int neededA = totalA - k, neededB = totalB - k, neededC = totalC - k;

        // Sliding window to find the longest valid substring
        int left = 0, right = 0;
        int windowA = 0, windowB = 0, windowC = 0;
        int maxWindow = 0;

        while (right < len) {
            // Expand the window
            if (str[right] == 'a') windowA++;
            if (str[right] == 'b') windowB++;
            if (str[right] == 'c') windowC++;
            right++;

            // Shrink the window if we exceed the "needed" counts
            while (windowA > neededA || windowB > neededB || windowC > neededC) {
                if (str[left] == 'a') windowA--;
                if (str[left] == 'b') windowB--;
                if (str[left] == 'c') windowC--;
                left++;
            }

            // Update the maximum valid window size
            maxWindow = max(maxWindow, right - left);
        }

        // Minimum time is the remaining characters outside the largest valid window
        return len - maxWindow;
        


        
    }
};