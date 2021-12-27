class Solution {
public:
    int findComplement(int num) {
        int ans=0,i=0;
        while(num>0){
            int bit = num&1;
            if(bit==0){
                ans+=pow(2,i);
            } 
            ++i;
            num>>=1;
        }
        return ans;
    }
};
