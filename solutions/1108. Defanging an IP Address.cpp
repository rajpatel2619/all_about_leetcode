class Solution {
public:
    string defangIPaddr(string address) {
     string ans="";
        int len = address.length();
        for(int i=0;i<len;i++){
            if(address[i]=='.') ans+="[.]";
            else ans+=address[i];
        }
        return ans;
    }
};
