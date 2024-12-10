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


    //     for (auto it = mpp.rbegin(); it != mpp.rend(); ++it) {

    //         if(it->second>=3){

    //             char ch=it->first;
    //             int size=it->second;
    //             int till=1;

    //             while(till<size){
    //                 int j=0;
    //                 int ct=0;
    //                 int i=0;
    //                 while(i<str.length() && j<str.length()){

    //                     if(j-i+1==till){
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
    //                     }
    //                     j++;
    //                     i++;
    //                 }

    //                 if(ct>=3){
    //                     maxi=max(maxi,till);
    //                 }

    //                 till++;
            
    //             }
    //         }
    // }

    // return maxi;

    // map<char, int> mpp;

    //     // Count the frequency of all characters
    //     for (int i = 0; i < str.length(); i++) {
    //         mpp[str[i]]++;
    //     }

    //     bool valid = false;

    //     // Check if any substring can ever be valid by having at least two instances
    //     for (auto it : mpp) {
    //         if (it.second >= 2) {
    //             valid = true;
    //         }
    //     }

    //     if (!valid) {
    //         return -1; // If no repeated substring is possible
    //     }

    //     int maxi = INT_MIN;

    //     // Iterate over characters in reverse order
    //     for (auto it = mpp.rbegin(); it != mpp.rend(); ++it) {
    //         if (it->second >= 3) { // Only consider characters that repeat at least 3 times
    //             char ch = it->first;
    //             int size = it->second;
    //             int till = 1; // Start testing substrings of size `till`

    //             // Attempt substrings of varying sizes
    //             while (till <= size) {
    //                 int count = 0;
    //                 int j = 0;

    //                 while (j + till <= str.size()) {
    //                     bool flag = true;
    //                     for (int k = j; k < j + till; k++) {
    //                         if (str[k] != ch) {
    //                             flag = false;
    //                             break;
    //                         }
    //                     }

    //                     if (flag) {
    //                         count++;
    //                     }

    //                     j++;
    //                 }

    //                 // Update if substring occurs at least 3 times
    //                 if (count >= 3) {
    //                     maxi = max(maxi, till);
    //                 }

    //                 till++;
    //             }
    //         }
    //     }

    //     return (maxi == INT_MIN) ? -1 : maxi;

     map<char, int> mpp;

        // Count the frequency of all characters
        for (int i = 0; i < str.length(); i++) {
            mpp[str[i]]++;
        }

        bool valid = false;

        // Check if any substring can ever be valid by having at least two instances
        for (auto it : mpp) {
            if (it.second >= 2) {
                valid = true;
            }
        }

        if (!valid) {
            return -1; // If no repeated substring is possible
        }

        int maxi = INT_MIN;

        // Iterate over characters in reverse order
        for (auto it = mpp.rbegin(); it != mpp.rend(); ++it) {
            if (it->second >= 3) { // Only consider characters that repeat at least 3 times
                char ch = it->first;
                int size = it->second;
                int till = 1; // Start testing substrings of size `till`

                while (till <= size) { // Test substrings of different lengths
                    int i = 0;
                    int ct = 0;
                    int j = 0;

                    // Sliding window with j - i + 1 logic
                    while (j < str.size()) {
                        if (j - i + 1 == till) { // Window size matches `till`
                            bool flag = true;
                            for (int k = i; k <= j; k++) { // Verify substring validity
                                if (str[k] != ch) {
                                    flag = false;
                                    break;
                                }
                            }

                            if (flag) {
                                ct++;
                            }

                            i++;
                        }

                        j++;
                    }

                    // Update if substring occurs at least 3 times
                    if (ct >= 3) {
                        maxi = max(maxi, till);
                    }

                    till++; // Increase the length of substrings tested
                }
            }
        }

        return (maxi == INT_MIN) ? -1 : maxi;
        
    }
};