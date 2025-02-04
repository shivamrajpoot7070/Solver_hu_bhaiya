

class Solution {
public:
    int minSwaps(string s) {
        std::stack<char> st; // Stack to keep track of opening brackets
        int unmatchedClose = 0; // Count of unmatched closing brackets

        for (char c : s) {
            if (c == '[') {
                st.push(c); // Push opening bracket onto stack
            } else { // c == ']'
                if (!st.empty()) {
                    st.pop(); // Pop an opening bracket for a matched closing bracket
                } else {
                    unmatchedClose++; // Count unmatched closing brackets
                }
            }
        }

        // After the loop, st.size() will give the count of unmatched opening brackets
        int unmatchedOpen = st.size();
        
        // Each swap can fix one unmatched closing and one unmatched opening
        return (unmatchedClose + 1) / 2; // Calculate the minimum swaps needed
    }
};
