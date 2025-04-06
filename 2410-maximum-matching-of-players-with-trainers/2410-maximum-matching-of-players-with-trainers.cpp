class Solution {
public:
    int matchPlayersAndTrainers(vector<int>& pla, vector<int>& tra) {

        sort(pla.begin(),pla.end());
        sort(tra.begin(),tra.end());


        int i=0;
        int j=0;

        int ct=0;

        while(i<pla.size() && j<tra.size()){

            if(pla[i]<=tra[j]){
                i++;
                j++;
                ct++;
            }
            else{
                j++;
            }
        }

        return ct;
        
    }
};