class Solution {
public:
    int nextGreaterElement(int n) {

        vector<int>v;

    int t=n;

    while(t){

        v.push_back(t%10);
        t=t/10;
    }

    reverse(v.begin(),v.end());

    
    int mini=INT_MAX;

    int i=v.size()-2;

    for (; i >= 0; i--) {

        if(v[i]<v[i+1]){
            break;
        }
    }

    if(i<0){
        return -1;
    }

    int j=v.size()-1;
    int ind=-1;

    for(;j>i;j--){

        if(v[j]>v[i] && v[j]<mini){  // smallest possible
            ind=j;
            mini=v[j];
        }
    }

    if (ind != -1) {

        swap(v[i], v[ind]);
    }
    sort(v.begin()+i+1,v.end());

    long long big=0;


    for(int k=0;k<v.size();k++){

        big=big*10+v[k];


    }

    if (big != n && big<=INT_MAX) {
        return big;
    }

    return -1;

      

      
        
    }
};