class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        
        int ct=0;

        for(long long i=low;i<=high;i++){

            // int len=0;  
            // long long num=i;
            // long long aage=num;
            // long long piche=0;

            // while(num>0){
            //     len++;
            //     int rem=num%10;
            //     piche=piche*10+rem;
            //     num=num/10;
            // }

            // if(len%2==0){
            //     int half1=len/2;
            //     int st=0;
            //     int s1=0;
            //     int s2=0;
            //     while(st<half1){
            //         s1+=aage%10;
            //         aage=aage/10;
            //         st++;
            //     }

            //     st=0;

            //     while(st<half1){
            //         s2+=piche%10;
            //         piche=piche/10;
            //         st++;
            //     }

            //     if(s1==s2) ct++;

            string num=to_string(i);
            int len=num.length();

            if(len%2==0){
                int s1=0;
                int s2=0;
                for(int i=0;i<len/2;i++){
                    s1+=num[i];
                }

                int end=len-1;

                for(int i=end;i>=len/2;i--){
                    s2+=num[i];
                }

                if(s1==s2) ct++;
            }

        }

        return ct;
    }
};