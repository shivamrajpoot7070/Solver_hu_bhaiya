class Solution {
public:
    int numberOfSubstrings(string s) {
        int i=0;
        int j=0;
        int res=0;
        vector<int>ab(3,0);
        int n=s.size();

        while(j<n){
            ab[s[j]-'a']++;

            while(ab[0]>0 && ab[1]>0 && ab[2]>0){
                res=res+(n-j);
                ab[s[i]-'a']--;
                i++;
            }
            j++;
        }
        return res;
    }
};