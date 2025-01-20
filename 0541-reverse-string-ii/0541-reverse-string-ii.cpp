class Solution {
public:
    string reverseStr(string s, int k) {
        
        int l=0;
        int len=s.length();
        int r=min(k,len);


        while(l<len){
            reverse(s.begin()+l,s.begin()+r);
            l=l+2*k;
            r=min(l+k,len);
        }

        return s;
        
    }
};