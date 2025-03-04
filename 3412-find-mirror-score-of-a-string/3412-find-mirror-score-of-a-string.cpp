// class Solution {
// public:
//     long long calculateScore(string s) {
//         int n = s.length();
//         vector<int> marked(n, 0);  // Track marked indices
//         long long score = 0;

//         map<char,int>mpp;

//         for (int i = 0; i < n; i++) {
//             if (marked[i]) continue; // Skip already marked indices

//             // Calculate the mirror character
//             mpp[s[i]]=i;
//             char mirror = 'z' - (s[i] - 'a');

//             if(mpp.find(mirror)!=mpp.end()){
//                 int j=mpp[mirror];
//                 if(!marked[j]){
//                     score+=i-j;
//                     marked[j]=1;
//                     marked[i]=1;
//                 }
//                 break;
//             }
//         }

//         return score;
//     }
// };

class Solution {
public:
    long long calculateScore(string s) {
        int n = s.length();
        vector<int> marked(n, 0);  // Track marked indices
        long long score = 0;

        // Store all indices for each character
        map<char, vector<int>> mpp;

        // Iterate through the string
        for (int i = 0; i < n; i++) {
            if (marked[i]) continue; // Skip already marked indices

            // Calculate the mirror character
            char mirror = 'z' - (s[i] - 'a');

            // Search for the closest unmarked index j < i with s[j] == mirror
            
            if(mpp.find(mirror)!=mpp.end() && mpp[mirror].size()>0){

                int lastpos=mpp[mirror].back();
                mpp[mirror].pop_back(); /// mark it used;
    
                score+=i-lastpos;
            }
            else{

                mpp[s[i]].push_back(i);
            }
        }

        return score;
    }
};

