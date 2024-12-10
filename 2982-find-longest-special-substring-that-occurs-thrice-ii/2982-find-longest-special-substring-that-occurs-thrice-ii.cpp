class Solution {
public:
    int maximumLength(string s) {


        // check mik solution

       int n = s.length();

        vector<vector<int>> matrix(26, vector<int>(n+1, 0));
        
        char prev_char = s[0];
        int length = 0;

        for(int i = 0; i < n; i++) {
            char curr_char = s[i];

            if(curr_char == prev_char) {
                length += 1;
                matrix[curr_char-'a'][length] += 1;
            } else {
                length = 1;
                matrix[curr_char-'a'][length] += 1;
                prev_char = curr_char;
            }
        }


        int result = 0;
        for(int i = 0; i < 26; i++) {
            int cumSum = 0;
            for(int j = n; j >= 1; j--) {  // piche se traverse kr rhe qki jaise aayng cummulative sum bdhega or size ghtega string ka
                cumSum += matrix[i][j];
                if(cumSum >= 3) {   // iske aage or length chota hi hoga
                    result = max(result, j);
                    break;
                }
            }
        }
        return result == 0 ? -1 : result;
        
    }
};