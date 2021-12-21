class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int val=0;
        for(auto &e:operations){
            if(e.find("+")!=string::npos) val++;
            else val--;
        }
        return val;
    }
};
