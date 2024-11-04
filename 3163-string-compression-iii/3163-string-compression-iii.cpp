class Solution {
public:
    string compressedString(string str) {

       
        int ct=1;
        string comp;


        for(int i=0;i<str.length()-1;i++){


            if(str[i]==str[i+1]){
                ct++;
                if(ct>9){
                    comp+=to_string(ct-1);
                    comp+=str[i];
                    ct=1;
                }
            }

            else{
                comp+=to_string(ct);
                comp+=str[i];
                ct=1;
            }
        }

        
            comp+=to_string(ct);
            comp+=str.back();
        

        return comp;

        

    }
};