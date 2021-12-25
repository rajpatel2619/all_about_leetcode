class Solution {
public:
    bool isSubsequence(string s, string t) {
        int prev=-1,count=0;
        for(int i=0;i<s.length();i++){
            for(int j=prev+1;j<t.length();j++){
                if(s[i]==t[j]){
                    prev=j;
                    count++;
                    break;
                }
            }
        }
        return (count==s.length()) ?true:false;
    }
};
