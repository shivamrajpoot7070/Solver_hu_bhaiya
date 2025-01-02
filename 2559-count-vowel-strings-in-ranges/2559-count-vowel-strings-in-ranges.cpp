class Solution {
public:
    vector<int> vowelStrings(vector<string>& arr, vector<vector<int>>& que) {
        int n=arr.size();
        vector<int>mpp(n,0);

        for (int i = 0; i < arr.size(); i++) {

            string temp = arr[i];

            char a = temp[0];
            char b = temp[temp.length() - 1];

            if (i == 0) {

                if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' ||
                     a == 'u') &&
                    (b == 'a' || b == 'e' || b == 'i' || b == 'o' ||
                     b == 'u')) {

                    mpp[i] = 1;

                }

                else {
                    mpp[i] = 0;
                }
            }

            else {

                if ((a == 'a' || a == 'e' || a == 'i' || a == 'o' ||
                     a == 'u') &&
                    (b == 'a' || b == 'e' || b == 'i' || b == 'o' ||
                     b == 'u')) {
                        mpp[i]=mpp[i-1]+1;
                }
                else{
                    mpp[i]=mpp[i-1];
                }
            }
        }

            vector<int> ans;

            for (int i = 0; i < que.size(); i++) {

                int st = que[i][0];
                int ed = que[i][1];


                if(st-1>=0){
                    int tot=mpp[ed]-mpp[st-1];
                    ans.push_back(tot);

                }
                else{
                    int tot=mpp[ed];
                    ans.push_back(tot);
                }
            }

            return ans;
        }
    };