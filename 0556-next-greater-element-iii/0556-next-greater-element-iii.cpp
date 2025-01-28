class Solution {
public:
    int nextGreaterElement(int n) {

        vector<int>v;


        int temp=n;


        while(temp>0){
            v.push_back(temp%10);
            temp=temp/10;
        }

        reverse(v.begin(),v.end());

        int j=v.size()-2;
        int mini=v[v.size()-1];

        while(j>=0){

            if(v[j]>=mini){
                mini=v[j];
            }

            else{
                break;
            }
            j--;
        }

        if(j<0){
            return -1;
        }


        int i=v.size()-1;
        while(v[i]<=v[j]){
            i--;
        }

        swap(v[j],v[i]);
        sort(v.begin()+j+1,v.end());

        long long num=0;


        for(int i=0;i<v.size();i++){
            num=num*10+v[i];
        }


        if(num>INT_MAX){
            return -1;
        }

        return num;
    
    }
};