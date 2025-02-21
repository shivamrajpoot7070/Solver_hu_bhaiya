class Solution {
public:
    bool rotateString(string s, string goal) {
        
        string temp=s;

        if(goal.length()!=s.length()){

            return false;
        }

        s+=temp;

        int i=0;
        int j=0;

        temp="";


        while(i<s.length() && j<s.length()){

            temp+=s[j];
            if(j-i+1==goal.length()){

                if(goal==temp){
                    return true;
                }

                temp.erase(0,1);
                i++;
            }
            j++;
        }

        return false;
    }
};